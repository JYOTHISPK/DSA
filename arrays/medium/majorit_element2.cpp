/*
--------------------------------------------
Problem     : Optimal Solution To Find Majority Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 08-06-2025
Description : Given an integer array.Iterate
              through it and return the elements
              which appear more than (size/2) times.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void majority(int arr[],int n){
    int element=arr[0],count=0,check=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element)     count++;
        else if(!count)     element=arr[i];
        else    count--;
    }
    for(int i=0;i<n;i++)    if(arr[i]==element)    check++;
    if(check>(n/2))     cout << element << " is major element ";
    else    cout << "there is no major element";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    majority(arr,n);
}