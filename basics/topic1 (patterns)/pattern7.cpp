#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    int start;
    for(int i=0;i<t;i++){
        if (!(i%2))
            start=1;
        else 
            start=0;    
        for(int j=0;j<=i;j++){
            cout << start << " ";
            start+=1;
            start=start%2;
        }
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