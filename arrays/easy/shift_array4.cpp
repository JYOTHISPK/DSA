/*
--------------------------------------------
Problem     : Optimal Solution To Shift Elements
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 30-05-2025
Description : Given a integer array.Shift all elements
              input bit left circularly.

Time Complexity : O(n)
Space Complexity: O(1)
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
    reverse(arr,arr+n-s);
    reverse(arr+n-s,arr+n);
    reverse(arr,arr+n);
    cout << "shifted array is : ";
    for(int i=0;i<n;i++)    cout << arr[i] << " " ;
}
