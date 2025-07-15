/*
--------------------------------------------
Problem     : Merge Sorted Arrays Without Extra Space.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 12-07-2025
Description : Read 2 sorted arrays.Iterate from back to front in first array and 
              viceversa in second array.Swap elements if element in first array is 
              greater than element in second array.Sort both arrays and print 
              combined array.

Time Complexity : O(min(m,n) + O(n log n) + O(m log m)
Space Complexity: O(1)  
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void mergearray(int arr1[],int arr2[],int m,int n){
    int index1=m-1;
    int index2=0;
    while(arr1[index1]>arr2[index2] || index1>=0 || index2<n){
        swap(arr1[index1],arr2[index2]);
        index1--;
        index2++;
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    cout << "merged third array : ";
    for(int i=0;i<m;i++)    cout << arr1[i] << " ";
    for(int i=0;i<n;i++)    cout << arr2[i] << " ";
}

int main(){
    int m,n;
    cout << "enter size of both arrays : " ;
    cin >> m >> n;
    int arr1[m],arr2[n];
    cout << "enter elements : ";
    for(int i=0;i<m;i++)    cin >> arr1[i];
    for(int i=0;i<n;i++)    cin >> arr2[i];
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    mergearray(arr1,arr2,m,n);
}