/*
--------------------------------------------
Problem     : Optimal Solution To Find Four Sum Elements.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 04-07-2025
Description : Input an array and find unique 4 elements 
              whose sum is target.

Time Complexity : O(n³)
Space Complexity: O(k) 
                  k is unique quads in the set and result vector. 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

vector <vector<int>> foursum(int arr[],int n,int target){
    sort(arr,arr+n);
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j!=i+1 && arr[j]==arr[j-1])  continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                int sum=arr[i]+arr[j]+arr[k]+arr[l];
                if(sum<target)  k++;
                else if(sum>target) l++;
                else{
                    vector <int> temp={arr[i],arr[j],arr[k],arr[l]};
                    v.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1])  k++;
                    while(k<l && arr[l]==arr[l+1])  l--;
                }
            }
        }
    }
    return v;
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