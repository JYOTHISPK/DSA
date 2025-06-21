/*
--------------------------------------------
Problem     : To Find Next Permutation Of Elements
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 11-06-2025
Description : Given an integer array.Iterate
              through it and find next permutation
              which is likely to occur as in
              a dictionary.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void next(int arr[],int n){
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1)   sort(arr,arr+n);
    else{
        for(int j=n-1;j>=index;j--){
            if(arr[j]>arr[index]){
                swap(arr[index],arr[j]);
                break;
            }
        }
        sort(arr+index+1,arr+n);
    }
    cout << "next permutaion is : ";
    for(int i=0;i<n;i++)    cout << arr[i] << " ";

}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    next(arr,n);
}