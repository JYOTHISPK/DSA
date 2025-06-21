/*
--------------------------------------------
Problem     : Selection Sort
Category    : Sorting Techniques
Language    : C++
Author      : Jyothis P K
Date        : 25-05-2025
Description : Sort the elements in a given
              array using selection sort.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        int max=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[max])  max=j;
        }
        swap(arr[i],arr[max]);
    }
    cout << "sorted array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}