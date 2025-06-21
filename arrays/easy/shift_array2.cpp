/*
--------------------------------------------
Problem     : Brute Force Solution To Shift Elements
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 30-05-2025
Description : Given a integer array.Shift all elements
              input bit left circularly.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    cout << "enter space to shift : ";
    cin >> s;
    int temp[s];
    for(int i=0;i<s;i++)    temp[i]=arr[i];
    for(int i=s;i<n;i++)    arr[i-s]=arr[i];
    for(int i=0;i<s;i++)    arr[n-i-1]=temp[s-i-1];
    cout << "shifted array is : ";
    for(int i=0;i<n;i++)    cout << arr[i] << " " ;
}
