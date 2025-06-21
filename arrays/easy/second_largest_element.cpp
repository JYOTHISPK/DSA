/*
--------------------------------------------
Problem     : Find Second Largest Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 29-05-2025
Description : Given an integer array.Iterate
              through it to find largest element.
              Iterate again through it to find
              second largest element.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int largest=arr[0],second=-1;
    for(int i=0;i<n;i++)
        if(arr[i]>largest)  largest=arr[i];
    for(int i=0;i<n;i++)
        if(arr[i]<largest && arr[i]>second)  second=arr[i];
    if(second==-1)  cout << "there is no second largest number";
    else    cout << "second largest number is " << second;
}