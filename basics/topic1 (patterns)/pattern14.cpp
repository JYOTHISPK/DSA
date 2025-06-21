#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    int space=2*t-2;
    for(int i=0;i<t;i++){
        for(int j=0;j<=i;j++)
            cout << "*";
        for(int j=0;j<space;j++)
            cout << " ";
        for(int j=0;j<=i;j++)
            cout << "*";
        space-=2;
        cout << "\n";
    }
    space+=4;
    for(int i=0;i<t-1;i++){
        for(int j=0;j<t-i-1;j++)
            cout << "*";
        for(int j=0;j<space;j++)
            cout << " ";
        for(int j=0;j<t-i-1;j++)
            cout << "*";
        space+=2;
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