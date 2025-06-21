/*
--------------------------------------------
Problem     : Print Unique Element Array
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 04-06-2025
Description : Given a integer array.Iterate through 
              it to remove all duplicate elements.
              Use a set to store elements in unique.

Time Complexity : O(n log n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void unique(int arr[],int n){
    set <int> st;
    for(int i=0;i<n;i++)    st.insert(arr[i]);
    int index=0;
    for(auto it : st)   arr[index++]=it;
    cout << "unique array is : ";
    for(int i=0;i<index;i++)    cout << arr[i] << " ";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    unique(arr,n);
    
}