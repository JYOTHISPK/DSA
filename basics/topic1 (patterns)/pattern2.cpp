#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count=1,k;
    cout << "\nenter number : ";
    cin >> n;
    for(int i=0;i<n;i++){
        m=n-i;
        for(int j=0;j<m;j++){
            cout << " " ;
        }
        for(k=0;k<count;k++){
            cout << char('A'+k);
        }
        for(int j=k-2;j>=0;j--){
            cout << char('A'+j);
        }
        count++;
        cout << "\n";
    }
    return 0;
}