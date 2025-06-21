/*
--------------------------------------------
Problem     : Find Number Of Subarrays With
              Given Sum Value.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 17-06-2025
Description : Read an integer array and a value.
              Return the number of subarrays whose
              sum is given value.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void countsub(int arr[],int n){
    int k;
    cout << "enter number : ";
    cin >> k;
    int presum=0,count=0;
    map < int,int > mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int remove=presum-k;
        count+=mpp[remove];
        mpp[presum]++;
    }
    cout << "no. of subarrays with " << k << " sum is " << count;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    countsub(arr,n);
}