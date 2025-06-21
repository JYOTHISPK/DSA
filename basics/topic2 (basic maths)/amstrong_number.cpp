/*
--------------------------------------------
Problem     : palindrome number
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 08-05-2025
Description : Input a number,check whether it is palindrome or not.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count,temp,dup;
    cout << "\nenter number of testbench : ";
    cin >> k;
    for(int i=0;i<k;i++){
        count=0;
        cout << "\nenter input no. "  << i+1 << " : ";
        cin >> n;
        dup=n;
        while(n>0){
            temp=n%10;
            count+=pow(temp,3);
            n/=10;
        }
        if(count==dup)
            cout << "\namstrong.";
        else   
            cout << "\nnot amstrong.";
    }
}