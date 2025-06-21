#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    for(int i=0;i<t;i++){
        for(int j=0;j<(t-i-1);j++)
            cout << " ";
        for(char ch='A';ch<='A'+i;ch++)
            cout << ch;
        for(char c='A'+i-1;c>='A';c--)
            cout << c;
        cout << "\n";    
    }
}

int main(){
    int t,n;
    cout << "\nenter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "\nenter input no. " << i << " : ";
        cin >> n;
        pattern(n);
    }
}