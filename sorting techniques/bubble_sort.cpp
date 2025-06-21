/*
--------------------------------------------
Problem     : Bubble Sort
Category    : Sorting Techniques
Language    : C++
Author      : Jyothis P K
Date        : 24-05-2025
Description : Sort the elements in a given
              array using bubble sort.

Time Complexity : O(n²)
Space Complexity: O(1)

--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
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
    bubble(arr,n);
    cout << "sorted array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}