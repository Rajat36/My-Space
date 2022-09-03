#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    // cout<<size<<endl;
    int key = 4;
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;

    while(start < end){
        // cout<<"."<<endl;
        if(key == arr[mid]){
            cout<<mid<<endl;
            break;
        }else if(key < arr[mid]){
            end = mid;
        }else if(key > arr[mid]){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }


    return 0;
}