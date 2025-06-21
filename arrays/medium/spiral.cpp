/*
--------------------------------------------
Problem     : Find Spiral Elements Of An Array.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 16-06-2025
Description : Given an integer array.Display all
              elements of it in spiral order.

Time Complexity : O(m x n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void spiral(int arr[][100],int m,int n){
    int top=0,bottom=m-1,left=0,right=n-1; 
    cout << "spiral elements are ";
    while(top<=bottom && left<=right){
        //right
        for(int i=left;i<=right;i++) cout << arr[top][i] << " ";
        top++;
        //bottom
        for(int i=top;i<=bottom;i++) cout << arr[i][right] << " ";
        right--;
        //left
        if(top<=bottom){
            for(int i=right;i>=left;i--) cout << arr[bottom][i] << " ";
            bottom--;
        }
        //top
        if(left<=right){
            for(int i=bottom;i>=top;i--) cout << arr[i][left] << " ";
            left++;
        }
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
    spiral(arr,m,n);
}