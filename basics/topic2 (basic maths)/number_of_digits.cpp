/*
--------------------------------------------
Problem     : Find Number Of Digits
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 11-05-2025
Description : Find number of digits of a given number.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cout << "\nenter number of testbench : ";
    cin >> k;
    for(int i=0;i<k;i++){
        cout << "\nenter input no. "  << i+1 << " : ";
        cin >> n;
        count=log10(n)+1;
        cout << "\nno. of digits is " << count;
    }
}