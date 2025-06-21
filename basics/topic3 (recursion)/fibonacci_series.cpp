/*
--------------------------------------------
Problem     : Fibonacci Series
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 13-05-2025
Description : Print fibonacci series upto a given number.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "enter input "<< i+1 <<" : ";
        cin >> n;
        cout << "fibonacci series upto "<<n << " no. is : ";
        for(int j=0;j<n;j++)
            cout << fib(j) << " "; 
        cout << "\n";
    }
}
