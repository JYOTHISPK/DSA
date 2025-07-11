/*
--------------------------------------------
Problem     : String Hashing
Category    : Hashing
Language    : C++
Author      : Jyothis P K
Date        : 21-05-2025
Description : Read a string(case insensitive).
              Display the number of times given
              character appears in that string.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int arr[256]={0};
    string s;
    cout << "\nenter input : ";
    cin >> s;
    for(int j=0;j<s.size();j++){
        arr[s[j]]++;
    }
    cout << "enter testbench number : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "enter letter :";
        char n;
        cin >> n;
        cout << "the letter " << n << " appears " << arr[n] ;
        if(arr[n]==1) cout << " time\n";
        else cout << " times\n"; 
    }
}