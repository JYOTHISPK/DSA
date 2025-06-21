/*
--------------------------------------------
Problem     : Reverse Array
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 17-05-2025
Description : Given an array.Reverse the elements
              of the array using recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rev(int start,int end,int a[]){
    if(start>=end)
        return;
    swap(a[start],a[end]);
    rev(start+1,end-1,a);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << " enter array size : ";
        cin >> n;
        int a[n];
        cout << "enter elements : ";
        for(int j=0;j<n;j++)
            cin >> a[j];
        rev(0,n-1,a);
        cout << "reversed array is : ";
        for(int j=0;j<n;j++)
            cout << a[j] << " ";
        cout << "\n";
    }
}
