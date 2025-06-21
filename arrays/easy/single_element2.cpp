/*
--------------------------------------------
Problem     : Optimal Solution To Find Single Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 01-06-2025
Description : Given a integer array.Iterate through 
              it and take XOR gate between all nearby
              elements.Final solution will be the
              single element.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void single(int arr[],int n){
    int xor1=0;
    for(int i=0;i<n;i++)    xor1=xor1^arr[i];
    cout << "single element is " << xor1;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    single(arr,n);
}