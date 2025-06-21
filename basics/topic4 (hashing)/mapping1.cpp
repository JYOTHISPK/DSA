/*
--------------------------------------------
Problem     : Query Elements In A Map
Category    : Hashing
Language    : C++
Author      : Jyothis P K
Date        : 19-05-2025
Description : Read elements to store in a map.
              Iterate through the map and print
              number of appearance of particular 
              element.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,q,k;
    cout << "enter size : ";
    cin >>  n;
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> l;
        mpp[l]++;
    }
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "enter query size : ";
    cin >> q;
    while(q--){
        cin >> k;
        cout << k << " appears " << mpp[k] << " times " << endl;
    }
}