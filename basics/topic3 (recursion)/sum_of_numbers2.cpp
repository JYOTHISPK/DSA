/*
--------------------------------------------
Problem     : Sum Of Numbers
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 18-05-2025
Description : Given a number N.Find sum of 
              numbers upto N using recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n<1)
        return 0;
    return n+sum(n-1);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "enter input no. " << i+1 << " : ";
        cin >> n;
        int result=sum(n);
        cout << "sum is "<< result << "\n";
    }
}
