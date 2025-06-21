#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    for(int i=0;i<t;i++)
        cout << "*";
    cout << "\n";
    for(int j=0;j<t-2;j++){
        cout << "*";
        //space
        for(int k=0;k<t-2;k++)
            cout << " ";

        cout << "*";
        cout << "\n";
    }
    for(int i=0;i<t;i++)
        cout << "*";
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