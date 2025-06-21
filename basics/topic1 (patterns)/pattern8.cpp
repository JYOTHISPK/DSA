#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    int space=2*t-2,j;
    for(int i=0;i<t;i++){
        for(j=0;j<=i;j++)
            cout << j+1;
        for(int k=0;k<space;k++)
            cout << " ";
        space-=2;
        for(int l=0;l<=i;l++)
             cout << j-l;    
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