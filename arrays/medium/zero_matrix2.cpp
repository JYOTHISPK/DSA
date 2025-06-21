/*
--------------------------------------------
Problem     : Optimal Solution To Display
              Zero Set Matrix.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 18-06-2025
Description : Read a binary 2-D array.if any element
              is 0,set all its rows and columns as 0.

Time Complexity : O(m x n)
Space Complexity: O(m + n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void checkzero(int arr[][100],int m,int n){
    int r[m]={0},c[n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!arr[i][j]){
                r[i]=1,c[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(r[i] || c[j])    arr[i][j]=0;
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