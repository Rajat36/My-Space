#include<bits/stdc++.h>
using namespace std;

int find_pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return s;
}

int main(){
     int arr[] = {4,4,5,6,1,2,3,4,4,};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<find_pivot(arr,size)<<endl;
}