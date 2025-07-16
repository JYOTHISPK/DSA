/*
--------------------------------------------
Problem     : Count Invertions
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 16-07-2025
Description : Given an integer array.Find the number of couple 
              having first element greater than second element 
              in the array.Optimal solution is obtained by 
              incrementing the count in between merge sorting
              and returning it.

Time Complexity : O(n log n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int start,int mid,int end){
    int temp[end-start+1];
    int left=start,right=mid+1,index=0,count=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right])   temp[index++]=arr[left++];
        else{
            temp[index++]=arr[right++];
            count+=mid-left+1;
        }
    }
    while(left<=mid)    temp[index++]=arr[left++];
    while(right<=end)    temp[index++]=arr[right++];
    for(int i=0;i<index;i++)    arr[start+i]=temp[i];
    return count;
}

int mergesort(int arr[],int start,int end){
    int count=0;
    if(start>=end)      return count;
        int mid=(start+end)-1;
        count+=mergesort(arr,0,mid);
        count+=mergesort(arr,mid+1,end);
        count+=merge(arr,start,mid,end);
        return count;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    int count=mergesort(arr,0,n-1);

    cout << "array after sorting : ";
    for(int i=0;i<n;i++)    cout << arr[i] << " ";

    cout << "count : "<< count;
}
