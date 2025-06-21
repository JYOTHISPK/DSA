/*
--------------------------------------------
Problem     : Brute Force Solution To Display
              Zero Set Matrix.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 18-06-2025
Description : Read a binary 2-D array.if any element
              is 0,set all its rows and columns as 0.

Time Complexity : O(m x n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void markrow(int arr[][100],int i,int n){
    for(int k=0;k<n;k++){
        if(arr[i][k])   arr[i][k]=-1;  
    }
}

void markcol(int arr[][100],int j,int m){
    for(int k=0;k<m;k++){
        if(arr[k][j])   arr[k][j]=-1;  
    }
}

void checkzero(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!arr[i][j]){
                markrow(arr,i,n);
                markcol(arr,j,m);
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }
    cout << "zero set matrix is\n" ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int m,n;
    cout << "enter size of matrix : ";
    cin >> m >> n;
    int arr[100][100];
    cout << "enter elements : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }    
    checkzero(arr,m,n);
}