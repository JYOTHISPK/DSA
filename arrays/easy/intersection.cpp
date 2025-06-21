/*
--------------------------------------------
Problem     : Intersection
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 26-05-2025
Description : Given 2 integer arrays.Find the 
              intersection of both arrays.

Time Complexity : O(m + n)
Space Complexity: O(min(m, n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void inter(int arr1[],int arr2[],int m,int n){
    vector <int> v;
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else{
            if(v.size()!=0 && v.back()==arr1[i])   continue;
            v.push_back(arr1[i]),i++,j++;
        }
    }
    cout << "intersection is : ";
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
    inter(arr1,arr2,m,n);
}