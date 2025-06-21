/*
--------------------------------------------
Problem     : Factorial
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 13-05-2025
Description : Find factorial of a given number 
              using recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n<1)
        return 1;
    return n*fact(n-1);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "enter input no. " << i+1 << " : ";
        cin >> n;
        int result=fact(n);
        cout << "factorial is "<< result<< "\n";
    }
}
