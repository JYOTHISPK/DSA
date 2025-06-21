/*
--------------------------------------------
Problem     : Insertion Sort
Category    : Sorting Techniques
Language    : C++
Author      : Jyothis P K
Date        : 24-05-2025
Description : Sort the elements in a given
              array using Insertion sort.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=i;
        while(temp>0 && arr[temp]<arr[temp-1]){
            swap(arr[temp],arr[temp-1]);
            temp--;
        }
    }
}

int main(){
    int n;
    cout << "enter size : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insert(arr,n);
    cout << "sorted array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}