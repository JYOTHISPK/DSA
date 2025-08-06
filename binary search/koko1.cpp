/*

Problem     : Koko Eating Bananas(Optimal Solution).
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 06-08-2025
Description : Given an array of integers arr.Use binary search to find
              the minimum value/hour by which a monkey can eat all bananase
              (elements) in the array whithin a given time limit. 
              The monkey can eat at least 1 banana per hour.
Time Complexity : o(n) x o(log(maxi)) where maxi is the maximum element in the array.
                  Here, n is the size of the array.
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;


int checklimit(int arr[],int n,int mid,int limit){
    int sum=0;
    for(int i=0;i<n;i++){
            sum+=ceil((double) arr[i]/mid);
        }
    if(sum<=limit)  return 1;
    else    return 0;
}

void koko(int arr[],int maxi,int n){
    int low=1,high=maxi,limit,mid,ans;
    cout << "enter limit : ";
    cin >> limit;
    while(low<=high){
        mid=(low+high)/2;
        if(checklimit(arr,n,mid,limit)) ans=mid, high=mid-1;
        else low=mid+1;
    }   
    cout << "minimum value is "<< ans;
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    int maxi=0;
    cout << "enter elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxi=max(maxi,arr[i]);
    }
    if(n==0){
        cout << "there is no minimum value ";
        return 0;
    }     
    koko(arr,maxi,n);
}