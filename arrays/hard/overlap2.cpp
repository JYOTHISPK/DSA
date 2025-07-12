/*
--------------------------------------------
Problem     : Optimal Solution To Merge Overlapping Subintervals.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 11-07-2025
Description : Input an array and some set of intevals.Iterate through
              each interval and merge any joining interval as a singleton
              interval .

Time Complexity : O(n + n log n)
Space Complexity: O(n)  
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> overlap( vector<vector<int>> v,int n){
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(ans.empty() || v[i][0] > ans.back()[1] ){
            ans.push_back(v[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],v[i][1]);
        }
    }
    return ans;
}

int main(){
    int n,no;
    cout << "enter array size : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)   cin >> arr[i];
    cout << "enter no. of sets : ";
    cin >> no;
   vector<vector<int>> v(no,vector<int>(2));
    cout << "enter set of elements : ";
    for(int i=0;i<no;i++){
        for(int j=0;j<2;j++){
            cin >> v[i][j];
        }
    }
    cout << "set of elements are :\n";
    for(int i=0;i<no;i++){
            cout << v[i][0] << " " << v[i][1] << endl;;
    }
    vector<vector<int>> ans=overlap(v,no);
    cout << "merged overlap sets are :\n";
    for(auto it:ans){
        cout << it[0] << " " << it[1] << endl;
    }
}