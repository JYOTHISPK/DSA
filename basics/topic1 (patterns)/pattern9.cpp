#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    for(int i=0;i<t;i++){
        for(char ch='A';ch<='A'+(t-i-1);ch++)
            cout << ch;
        cout << "\n";
    }

}

int main(){
    int n,t;
    cout << "\nenter testbench number : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "\nenter input no. " << i+1 << " : ";
        cin >> n;
        pattern(n);
    }
}