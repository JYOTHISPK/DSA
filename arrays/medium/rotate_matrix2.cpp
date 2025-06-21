/*
--------------------------------------------
Problem     : Optimal Solution To Rotate A 2-D Array.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 13-06-2025
Description : Given a 2-D array.Display matrix in such
              away that it is 90 degree rotated right.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j],arr[i][n-j-1]);
        }
    }
    cout << "90 degree rotated matrix is\n" ;
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
    rotate(arr,m,n);
}