/*
--------------------------------------------
Problem     : Print Elements In Parcals
              Triangle In A Given Row.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 21-06-2025
Description : Read row number and print all elements
              in that row of Pascals Triangle.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void checkrow(int n){
    int num=1;
    int r=1;
    cout << "pascal's triangle elements at given row are : " << num << " ";
    for(int i=0;i<n;i++){ 
        num*=(n-i);
        num/=i+1;
        cout << num << " ";
    }
}

int main(){
    int r,c;
    cout << "enter row : ";
    cin >> r;
    checkrow(r-1);
}