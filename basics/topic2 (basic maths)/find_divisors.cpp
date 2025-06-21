/*
--------------------------------------------
Problem     : Find Divisors
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 08-05-2025
Description : Find divisors of a given number.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,temp;
    cout << "\nenter number of testbench : ";
    cin >> k;
    for(int i=0;i<k;i++){
        cout << "\nenter input no. "  << i+1 << " : ";
        cin >> n;
        cout << "\ndivisors : ";
        for(int j=1;j<=n;j++){
            if(!(n%j))
                cout << j << " ";
        }
        cout << "\n";
    }
}