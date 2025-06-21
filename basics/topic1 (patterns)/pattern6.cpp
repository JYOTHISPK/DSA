#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    for(int i=0;i<t;i++){
        for(int j=0;j<=i;j++)
            cout << "*";
        cout << "\n";    
    }
    for(int i=0;i<t-1;i++){
        for(int j=0;j<t-i-1;j++)
            cout << "*";
        cout << "\n";    
    }
}

int main(){
    int n,t;
    cout << "\nenter no. of testbench : ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "\nenter input " << i+1 << " : ";
        cin >> n;
        pattern(n);
    }
    return 0;
}