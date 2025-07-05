/*
--------------------------------------------
Problem     : Brute Force Solution To Find Three Sum Elements.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 04-07-2025
Description : Input an array and find unique 3 elements 
              whose sum is 0.

Time Complexity : O(n³ . n log k)
Space Complexity: O(k) 
                  k is unique triplets in the set and result vector. 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

vector <vector<int>> threesum(int arr[],int n){
    set <vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(!(arr[i]+arr[j]+arr[k])){
                    vector <int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector <vector<int>> ans (st.begin(),st.end());
    return ans;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)   cin >> arr[i];
    vector <vector<int >> ans=threesum(arr,n); 
    cout << "unique threesum elements are :\n";
    for(auto it : ans){
        for(int num : it){
            cout << num << " ";
        }
        cout << endl;
    }
}