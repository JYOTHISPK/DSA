/*
--------------------------------------------
Problem     : Left Shift Elements One Bit
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 30-05-2025
Description : Given a integer array.Shift all elements
              one bit left and first element to last index.

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
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    int temp=arr[0];
    for(int i=1;i<n;i++)    arr[i-1]=arr[i];
    arr[n-1]=temp;
    cout << "shifted array is : ";
    for(int i=0;i<n;i++)    cout << arr[i] << " " ;
}