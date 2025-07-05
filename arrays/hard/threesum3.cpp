/*
--------------------------------------------
Problem     : Optimal Solution To Find Three Sum Elements.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 04-07-2025
Description : Input an array and find unique 3 elements 
              whose sum is 0.

Time Complexity : O(n²)+n log n
Space Complexity: O(k) 
                  k is unique triplets in the set and result vector.  
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

vector <vector<int>> threesum(int arr[],int n){
    sort(arr,arr+n);
    vector <vector <int> > v; 
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0)   j++;
            else if(sum>0)  k--;
            else{
                vector <int> temp={arr[i],arr[j],arr[k]};
                v.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])   j++;
                while(j<k && arr[k]==arr[k+1])   k--;
            }
    }
    }
    return v;
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