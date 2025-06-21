/*
--------------------------------------------
Problem     : Print N To 1
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 16-05-2025
Description : Given a number N.Print N to 1 using recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void num(int i,int n){
    if(i<1)
        return;
    cout << i << " ";
    num(i-1,n);
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