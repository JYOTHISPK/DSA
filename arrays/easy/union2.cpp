/*
--------------------------------------------
Problem     : Optimal Solution To Find Union
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 03-06-2025
Description : Given 2 integer arrays.Find union
              of both arrays using a vector.

Time Complexity : O(m + n)
Space Complexity: O(m + n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void union1(int arr1[],int arr2[],int m,int n){
    vector <int> v;
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]==arr1[i-1])  i++;
        else if(arr2[j]==arr2[j-1])  j++;
        else if(arr1[i]<arr2[j])    v.push_back(arr1[i]),i++;
        else if(arr1[i]>arr2[j])    v.push_back(arr2[j]),j++;
        else v.push_back(arr1[i]),i++,j++;
    }
    while(i<m){
        if(arr1[i]==arr1[i-1])  i++;
        else  v.push_back(arr1[i]),i++;
    }
    while(j<n){
        if(arr2[j]==arr2[j-1])  j++;
        else  v.push_back(arr2[j]),j++;
    }
    cout << "union is : ";
    for(auto it : v)    cout << it << " ";
}

int main(){
    int m,n;
    cout << "enter size of arrays : ";
    cin >> m >> n;
    int arr1[m],arr2[n];
    cout << "enter elements of array 1 : ";
    for(int i=0;i<m;i++)    cin >> arr1[i];
    cout << "enter elements of array 2 : ";
    for(int i=0;i<m;i++)    cin >> arr2[i];
    union1(arr1,arr2,m,n);
}