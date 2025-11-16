/*
--------------------------------------------
Problem     : Count Inversion 
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 16-11-2025
Description : Count number of inverted numbers(a[j]>a[i]
              where i<j) in an array.

Time Complexity : O(n log n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end,int &count){
    int i=start,j=mid+1;
    int temp[end-start+1],index=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])  temp[index++]=arr[i++];
        else    count+=mid-i+1,temp[index++]=arr[j++];
    }
    while(i<=mid)   temp[index++]=arr[i++];
    while(j<=end)   temp[index++]=arr[j++];
    index=0;
    for(int i=start;i<=end;i++)    arr[i]=temp[index++];
}

void mergesort(int arr[],int start,int end,int &count){
    int mid=(start+end)/2;
    if(start>=end) return;
    mergesort(arr,start,mid,count);
    mergesort(arr,mid+1,end,count);
    merge(arr,start,mid,end,count);
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    mergesort(arr,0,n-1,count);
    cout << count << endl;
    cout << "sorted array is : ";
    for(int i:arr)  cout << i << " ";

}