#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    int north,south,east,west;
    for(int i=0;i<2*t-1;i++){
        for(int j=0;j<2*t-1;j++){
            north=i;
            west=j;
            east=2*t-2-i;
            south=2*t-2-j;
            cout << t-min(min(north,south),min(east,west)) << " ";
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