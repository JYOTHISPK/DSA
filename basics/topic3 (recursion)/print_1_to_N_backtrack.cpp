/*
--------------------------------------------
Problem     : Print 1 To N
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 13-05-2025
Description : Giveb a number N.Print 1 to N
              through backtracking in recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void num(int i,int n){
    if(i<1)
        return;
    num(i-1,n);
    cout << i << " ";
}

int main(){
    int n,k;
    cout << "\nenter testbench number : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "\nenter number : ";
        cin >> k;
        num(k,k);
    } 
}