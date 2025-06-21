/*
--------------------------------------------
Problem     : Print N To 1
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 16-05-2025
Description : Giveb a number N.Print N to 1
              through backtracking in recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void num(int i,int n){
    if(i>n)
        return;
    num(i+1,n);
    cout << i << " ";
}

int main(){
    int n,k;
    cout << "\nenter testbench size : ";
    cin >> k;
    for(int i=0;i<k;i++){
        cout << "\nenter input : ";
        cin >> n;
        num(1,n);
    }
}