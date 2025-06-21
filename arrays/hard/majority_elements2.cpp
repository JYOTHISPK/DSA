/*
--------------------------------------------
Problem     : Optimal Solution To Find Majority Element
              (Boyer-Moore Voting Algorithm).
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 20-06-2025
Description : Given an integer array.Iterate
              through it and return the elements
              which appear more than (size/3) times.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void major(int arr[],int n){
    int count1=0,count2=0;
    int ele1,ele2;
    for(int i=0;i<n;i++){
        if(!count1 && arr[i]!=ele2)     ele1=arr[i],count1++;
        else if(!count2 && arr[i]!=ele1)     ele2=arr[i],count2++;
        else if(arr[i]==ele1)    count1++;
        else if(arr[i]==ele2)    count2++;
        else count1--,count2--;
    }
    count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1)    count1++;
        if(arr[i]==ele2)    count2++;
    }
    int major=(n/3)+1,flag=0;
    if(count1>=major)   flag=1,cout << ele1 << " is a major element ";
    if(count2>=major)   flag=1,cout << ele2 << " is a major element ";
    if(!flag)   cout << "there is no major element ";
    }

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)    cin >> arr[i];
    major(arr,n);
}