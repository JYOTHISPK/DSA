/*
--------------------------------------------
Problem     : Find Element In Parcals
              Triangle At Given Position.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 21-06-2025
Description : Input position and print element
              in Pascals Triangle at that position.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int facto(int n,int r){
    int num=1;
    for(int i=0;i<r;i++){ 
        num*=(n-i);
        num/=i+1;
    }
    return num;
}

int main(){
    int r,c;
    cout << "enter row and column : ";
    cin >> r >> c;
    int n1=facto(r-1,c-1);
    cout << "the element is " << n1;
}