/*
--------------------------------------------
Problem     : Optimal Solution To Rearrange
              The Elements Of An Array.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 12-06-2025
Description : Given an integer array.Rearrange the 
              elements in such a way that all 
              +elements reside on even indexes
              and all -elements in odd indexes.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    vector < int > pos;
    vector < int > neg;
    for(int i=0;i<n;i++){
        if(arr[i]<0)    neg.push_back(arr[i]);
        else    pos.push_back(arr[i]);
    }
    if(pos.size()<neg.size()){
        for(int i=0;i<pos.size();i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index++]=neg[i];
        }
    }
    else{
        for(int i=0;i<neg.size();i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index++]=pos[i];
        }
    }

    cout << "rearranged array is : ";
    for(int i=0;i<n;i++)    cout << arr[i] << " ";    
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    rearrange(arr,n);
}