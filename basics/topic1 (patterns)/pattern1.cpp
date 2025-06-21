#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout << "\nenter number : ";
    cin >> n;
    for(int i=0;i<n;i++){
        m=n-i;
        for(int j=0;j<m;j++){
            cout << j+1 << " " ;
        }
        cout << "\n";
    }
    return 0;
}