/*
--------------------------------------------
Problem     : Merge Sort
Category    : Sorting Techniques
Language    : C++
Author      : Jyothis P K
Date        : 24-05-2025
Description : Sort the elements in a given
              array using Merge sort.

Time Complexity : O(nlogn)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector < int > temp ;
    int left=start,right=mid+1;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right])  temp.push_back(arr[left]),left++;
        else    temp.push_back(arr[right]),right++;
    }
    while(left<=mid)   temp.push_back(arr[left]),left++;
    while(right<=end)   temp.push_back(arr[right]),right++;

    for(int i=start;i<=end;i++)
        arr[i]=temp[i-start];
}

void mergesort(int arr[],int start,int end){
    if(start>=end)  return;
    int mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int n;
    cout << "enter array size : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    mergesort(arr,0,n-1);
    cout << "array after sorting : ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}