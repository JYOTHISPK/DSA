#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    for(int i=0;i<t;i++){
        for(char ch=('A'+t-1-i);ch<='A'+t-1;ch++)
            cout << ch;
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