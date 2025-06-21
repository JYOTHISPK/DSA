#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len=s.size();
    s[len-1]='z';
    cout << s;
    return 0;
}