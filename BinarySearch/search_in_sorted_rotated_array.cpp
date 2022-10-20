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

bool find(int arr[],int size,int key,int pivot){

     int s=0, e=size-1;
     int flag = 1;
    if(arr[pivot] <= key && key >= arr[size-1]){
        s = pivot;
        e = size - 1; 
    }else if(arr[0] <= key && key >= arr[pivot-1]){
        s = 0;
        e = pivot - 1;
    }else{
        return false;
    }
 
 int mid = s+(e-s)/2;

    while(s < e){
        // cout<<"."<<endl;
        if(key == arr[mid]){
            return true;
        }else if(key < arr[mid]){
            e = mid;
        }else if(key > arr[mid]){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }


return false;

}

int main(){
     int arr[] = {4,4,5,6,1,2,3,4,4,};
    int size = sizeof(arr)/sizeof(arr[0]);

  int pivot = find_pivot(arr,size);
  cout<<find(arr,size,3,pivot)<<endl;
}

