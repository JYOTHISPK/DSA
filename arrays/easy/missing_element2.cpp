/*
--------------------------------------------
Problem     : Optimal Solution To Find Missing Element 
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 28-05-2025
Description : Given a sorted integer array.Iterate
              through it and find the missing element.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void missing(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)    sum+=arr[i];
    int total=(n*(n+1))/2;
    if(!(total-sum))    cout << "there is no missing element";
    else    cout << "missing element is " << total-sum;    
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    missing(arr,n);
    
}