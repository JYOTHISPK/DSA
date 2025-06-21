/*
--------------------------------------------
Problem     : Brute Force Solution To Rearrange
              The Elements Of An Array.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 12-06-2025
Description : Given an integer array of even length.
              +ve and -ve elements should be of same number.
              Rearrange the elements in such a way
              that all +elements reside on even indexes
              and all -elements in odd indexes.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    int pos=0,neg=1;
    int temp[n];
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            temp[pos]=arr[i];
            pos+=2;
        }
        else{
            temp[neg]=arr[i];
            neg+=2;
        }
    }   
    cout << "rearranged array is : ";
    for(int i=0;i<n;i++)    cout << temp[i] << " ";    
}

int main(){
    int n;
    cout << "enter size of array (only even numbers) : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    rearrange(arr,n);
}