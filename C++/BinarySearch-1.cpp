#include<bits/stdc++.h>
using namespace std;

int main(){
  
int arr[] = {1,3,5,7,10};
int size = sizeof(arr)/sizeof(arr[0]);

int hi = size-1;
int lo = 0;
int key = 10;
int mid = lo + (hi-lo)/2;
int flag = 0;
while(lo<hi){
    if(key<arr[mid]){
         hi = mid;
    }else if(key > arr[mid]){
        lo = mid + 1;
    }else if(key == arr[mid]){
        flag = 1;
        break;
    }

    mid = lo + (hi-lo)/2;
}

if(flag == 1){
     cout<<"Found at pos : "<<mid<<endl;
}else{
    cout<<"Not Found!!!!!"<<endl;
}

}