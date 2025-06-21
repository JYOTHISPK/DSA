/*
--------------------------------------------
Problem     : Quick Sort
Category    : Sorting Techniques
Language    : C++
Author      : Jyothis P K
Date        : 25-05-2025
Description : Sort the elements in a given
              array using Quick sort.

Time Complexity : O(n²)
Space Complexity: O(logn)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int sort(int arr[],int low,int high){
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=arr[low] && i<=high)   i++;
        while(arr[j]>arr[low] && j>=low)  j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int partition=sort(arr,low,high);
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
    }
}

int main(){
    int n;
    cout << "enter array size : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    cout << "array after sorting : ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}