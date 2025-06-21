/*
--------------------------------------------
Problem     : Brute Force Solution To Rotate A 2-D Array.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 13-06-2025
Description : Given a 2-D array.Display matrix in such
              away that it is 90 degree rotated right.

Time Complexity : O(n²)
Space Complexity: O(n²)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[][100],int m,int n){
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k=n-1-i;
            arr1[j][k]=arr[i][j];
        }
    }
    cout << "90 degree rotated matrix is\n" ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr1[i][j] << " ";
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
    rotate(arr,m,n);
}