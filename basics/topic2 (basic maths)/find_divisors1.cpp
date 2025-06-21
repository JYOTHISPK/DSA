/*
--------------------------------------------
Problem     : Find Divisors
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 09-05-2025
Description : Find divisors of a given number.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,temp;
    vector <int> v;
    cout << "\nenter number of testbench : ";
    cin >> k;
    for(int i=0;i<k;i++){
        cout << "\nenter input no. "  << i+1 << " : ";
        cin >> n;
        cout << "\ndivisors : ";
        for(int j=1;j<=sqrt(n);j++){
            if(!(n%j)){
                v.push_back(j);
                if((n/j)!=j)
                    v.push_back(n/j);
            }
        }
        sort(v.begin(),v.end());
        for(auto at:v)
            cout << at << " ";
        cout << "\n";
        v.clear();
    }
}