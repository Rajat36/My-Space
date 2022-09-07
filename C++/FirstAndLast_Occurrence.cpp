#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,4,4,4,5,6,6,6,6,6,6,6,6,6,6,9,9,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end=size-1;
    int firstOcc = -1, lastOcc  = -1;
    int key = 9;

    // while(start<=end){  
    //     int mid = start+(end-start)/2;
    //     if(arr[mid]==key){  
    //         firstOcc = mid;
    //         lastOcc = mid;
    //     }else{
    //         end = mid-1;
    //     }
    // }


    // while(start<=end){  
    //     int mid = start+(end-start)/2;

    //     if(arr[mid]==key){  
    //         if(firstOcc == -1){
    //             firstOcc = mid;
    //         }
    //         lastOcc = mid;
    //         mid = start + (end-start)/2;
    //     }else{
    //         start = mid+1;
    //         mid = start + (end-start)/2;
    //     }
    // }

    while(start<=end) {
           int mid = (start+end)>>1;
           if( arr[mid] <= key  ) {
               end = mid;
           } else 
           start = mid;
    }

    firstOcc = end;

start = 0;
end = size-1;
 while(start<=end) {
           int mid = (start+end)>>1;
           if( arr[mid] < key  ) {
               end = mid;
           } else 
           start = mid;
    }

    lastOcc = start;


    cout<<firstOcc<<" "<<lastOcc<<endl;
}