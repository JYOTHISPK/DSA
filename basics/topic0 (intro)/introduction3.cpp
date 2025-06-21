#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout << "\nenter number : ";
    cin >> n;
    for(int i=0;i<n;i++){
        m=i+1;
        for(int j=1;j<=m;j++){
            cout << " " << j;
        }
        cout << "\n";
    }
    return 0;
}