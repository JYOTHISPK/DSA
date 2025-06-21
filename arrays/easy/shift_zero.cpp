/*
--------------------------------------------
Problem     : Shift Zero Elements To Last
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 31-05-2025
Description : Given a integer array.Shift all zero
              elements to last positions.
              
Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,temp,j=0;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++){
        cin >> temp;
        if(!temp)    count++;
        else    arr[j++]=temp;
    }
    cout << "output array is : ";
    for(int i=0;i<n-count;i++)    cout << arr[i] << " " ;
    for(int i=0;i<count;i++)    cout << " 0" ;
}
