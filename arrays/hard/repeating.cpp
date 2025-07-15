/*
--------------------------------------------
Problem     : Find Missing And Repeating Elements.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 15-07-2025
Description : Read an array.Find missing and repeating element
              in an array without using extra space and only one 
              iteration through the array.

Time Complexity : O(n)
Space Complexity: O(1)  
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void missing(int arr[],int n){
    long long x,y,total=0,total1=0;
    long long sum=(n*(n+1))/2;
    long long sum1=(n*(2*n+1)*(n+1))/6;
    for(int i=0;i<n;i++)    total+=arr[i],total1+=pow(arr[i],2);
    long long val1=total-sum;
    long long val2=total1-sum1;
    val2=val2/val1;
    x=(val1+val2)/2;
    y=val2-x;
    cout << "repeating : " << (int)x << endl;
    cout << "missing : " << (int)y;
}

int main(){
    int n;
    cout << "enter size of array : " ;
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    missing(arr,n);
}