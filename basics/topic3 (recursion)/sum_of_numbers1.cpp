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

void sum(int n,int s){
    if(n<1){
        cout << "sum is " << s << "\n";
        return;
    }
    sum(n-1,s+n);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "enter input no. " << i+1 << " : ";
        cin >> n;
        sum(n,0);
    }
}
