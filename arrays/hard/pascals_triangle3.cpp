/*
--------------------------------------------
Problem     : Display Parcals Triangle Upto Input Row.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 21-06-2025
Description : Input a row number and print Parcals
              Triangle elements upto that row.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void pascals(int n){
    
    cout << "pascal's triangle upto " << n << " rows\n";
    for(int i=1;i<=n;i++){
        int num=1;
        if(i!=1)    cout << endl << num << " ";
        for(int j=0;j<i;j++){
            num*=(i-j);
            num/=j+1;
            cout << num << " "; 
        }
    }
    
}

int main(){
    int r,c;
    cout << "enter no. of rows : ";
    cin >> r;
    pascals(r);
}