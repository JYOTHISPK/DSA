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
    int temp[end-start+1];
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right])  temp[index++]=arr[left++];
        else    temp[index++]=arr[right++];
    }
    while(left<=mid)   temp[index++]=arr[left++];
    while(right<=end)   temp[index++]=arr[right++];

    for(int i=0;i<index;i++)
        arr[start+i]=temp[i];
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