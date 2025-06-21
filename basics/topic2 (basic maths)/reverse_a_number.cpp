/*
--------------------------------------------
Problem     : Reverse Number
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 11-05-2025
Description : Input a number,reverse it.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0,temp;
    cout << "\nenter number of testbench : ";
    cin >> k;
    for(int i=0;i<k;i++){
        cout << "\nenter input no. "  << i+1 << " : ";
        cin >> n;
        while(n>0){
            temp=n%10;
            count=count*10+temp;
            n/=10;
        }
        cout << "\nreversed number : " << count;
    }
}