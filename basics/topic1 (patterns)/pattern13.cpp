#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    int space=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t-i;j++)
            cout << "*";
        for(int j=0;j<space;j++)
            cout << " ";
        for(int j=0;j<t-i;j++)
            cout << "*";
        cout << "\n";
        space+=2;
    }
    space-=2;
    for(int i=0;i<t;i++){
        for(int j=0;j<=i;j++)
            cout << "*";
        for(int j=0;j<space;j++)
            cout << " ";
        for(int j=0;j<=i;j++)
            cout << "*";
        cout << "\n";
        space-=2;
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