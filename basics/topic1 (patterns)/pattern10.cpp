#include<bits/stdc++.h>
using namespace std;
void pattern(int t){
    for(int i=0;i<t;i++){
        char ch='A'+i;
        for(int j=0;j<=(t-i-1);j++){
            cout << ch;
        }
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