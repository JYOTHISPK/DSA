/*
--------------------------------------------
Problem     : Find GCD
Category    : Basic Maths
Language    : C++
Author      : Jyothis P K
Date        : 09-05-2025
Description : Find GCD (Greatest Common Divisor) of any 2 given numbers.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,k,temp;
    vector <int> v1,v2,v3;
    cout << "\nenter number of testbench : ";
    cin >> k;
    for(int i=0;i<k;i++){
        cout << "\nenter input no. "  << i+1 << " : ";
        cin >> n1 >> n2;

        for(int j=1;j<=sqrt(n1);j++){
            if(!(n1%j)){
                v1.push_back(j);
                if((n1/j)!=j)
                    v1.push_back(n1/j);
            }
        }

        sort(v1.begin(),v1.end());
        cout << "\ndivisors of n1 : ";
        for(auto at:v1)
            cout << at << " ";
        cout << "\n";

        for(int j=1;j<=sqrt(n2);j++){
            if(!(n2%j)){
                v2.push_back(j);
                if((n2/j)!=j)
                    v2.push_back(n2/j);
            }
        }

        sort(v2.begin(),v2.end());
        cout << "\ndivisors of n2 : ";
        for(auto at:v2)
            cout << at << " ";
        cout << "\n";

        for(auto at1:v1){
            for(auto at2:v2){
                if(at1==at2)
                    v3.push_back(at1);
            }
        }

        cout << "\nn1 intersection n2 : ";
        for(auto at:v3)
            cout << at << " ";
        cout << "\n";
        
        sort(v3.begin(),v3.end());
        cout << "\nHCF : " << v3.back();
        cout << "\n";
        v1.clear(),v2.clear(),v3.clear();
    }
}