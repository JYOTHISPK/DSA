/*
--------------------------------------------
Problem     : Better Solution To Find Four Sum Elements.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 04-07-2025
Description : Input an array and find unique 4 elements 
              whose sum is target.

Time Complexity : O(n³ . log m)
Space Complexity: O(k) 
                  m is no. of elements inside set.
                  k is unique quads in the set and result vector. 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

vector <vector<int>> foursum(int arr[],int n,int target){
    set <vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set <int> hashset;
            for(int k=j+1;k<n;k++){
                int sum=target-(arr[i]+arr[j]+arr[k]);
                if(hashset.find(sum)!=hashset.end()){
                vector <int> temp={arr[i],arr[j],arr[k],sum};
                sort(temp.begin(),temp.end());
                st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans (st.begin(),st.end());
    return ans;
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)   cin >> arr[i];
    cout << "enter target : ";
    cin >> target;
    vector <vector<int >> ans=foursum(arr,n,target); 
    cout << "unique four elements are :\n";
    for(auto it : ans){
        for(int num : it){
            cout << num << " ";
        }
        cout << endl;
    }
}