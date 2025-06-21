/*
--------------------------------------------
Problem     : Most Appeared Character In A String
Category    : Hashing
Language    : C++
Author      : Jyothis P K
Date        : 20-05-2025
Description : Read a string into a map and find 
              the most appeared charcter.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0,q,k;
    string s;
    unordered_map <char,int> mpp;
    cout << "enter word : ";
    cin >> s;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        if(mpp[s[i]]>count) count=mpp[s[i]];
    }
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "most appeared character : ";
    for(auto it : mpp){
        if(count==it.second) cout << it.first << "  ";
    }
}