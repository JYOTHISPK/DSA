#include<bits/stdc++.h>
using namespace std;

void pattern(int t){
    int num=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t-i-1;j++)
            cout << " ";
        for(int k=0;k<=num;k++)
            cout << "*";  
        num+=2;   
        cout << "\n";    
    }

    num=2*t-1;
    for(int i=0;i<t;i++){
        for(int j=0;j<i;j++)
            cout << " ";
        for(int k=0;k<num;k++)
            cout << "*";  
        num-=2;   
        cout << "\n";    
    }
}

int main(){
    int n,t;
    cout << "\nenter number of testcases : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "\nenter " << i+1 << "th input : ";
        cin >> t;
        pattern(t);
    }
    return 0;
}