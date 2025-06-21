/*
--------------------------------------------
Problem     : Brute Force Solution To Find Union
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 03-06-2025
Description : Given 2 integer arrays.Find union
              of both arrays using a set.

Time Complexity : O((m + n) × log (m + n))
(Inserting into set takes O(log k) per element).
Space Complexity: O(m + n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void union1(int arr1[],int arr2[],int m,int n){
    set <int> st;
    for(int i=0;i<m;i++)    st.insert(arr1[i]); 
    for(int i=0;i<n;i++)    st.insert(arr2[i]);
    cout << "union is : ";
    for(auto a:st)  cout << a << " ";
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