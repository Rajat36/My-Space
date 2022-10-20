#include<bits/stdc++.h>
using namespace std;

// int maximumSumSubarray(int K, vector<int> &Arr , int N){
//   int i=0;
//   int j=0;
//   int sum=0;
//   int mx=INT_MIN;
//   while (j<N){
//     sum=sum+Arr[j]; // do calculation to reduse tc
//     if (j-i+1<K) J++; // increament j upto when the size of the size of window is not equal to required size
//     else if ((j-i+1)==K) // when sindow size hit to the required window size 
//     {
//       mx=max(mx,sum); // selecting ans from the candidates
//       sum=sum-Arr[i]; // start removing from the first
//       i++;
//       j++;
//     }
//   }
//   return mx;
// }


int main(){

vector<int> v = {1,2,3,4,5,6,7,8};
int size = v.size();
cout<<"size of the vector is :"<<size<<endl;

v.push_back(50);

size = v.size();
cout<<"size of the vector is :"<<size<<endl;
    return 0;
}