/*
--------------------------------------------
Problem     : Find GCD
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 10-05-2025
Description : Find GCD (Greatest Common Divisor) of any 2 given numbers using Eucledian Method.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,n1,n2;
    cout << "enter testbench number : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "\nenter input no. " << i+1 << " : ";
        cin >> n1 >> n2;
        while(n1>0 && n2>0){
            if(n1>n2)
                n1%=n2;
            else
                n2%=n1;
        }
        cout << "GCD : ";
        if(!n1)
            cout << n2;
        if(!n2)
            cout << n1;
        cout << "\n";
    }
}