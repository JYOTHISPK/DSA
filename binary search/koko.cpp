/*

Problem     : Koko Eating Bananas(Brute Solution).
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 06-08-2025
Description : Given an array of integers arr.Use any method to find
              the minimum value/hour by which a monkey can eat all bananase
              (elements) in the array whithin a given time limit. 
              The monkey can eat at least 1 banana per hour.
Time Complexity : o(n) x o(maxi) where maxi is the maximum element in the array.
                  Here, n is the size of the array.
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void koko(int arr[],int n){
    int koko=1,limit;
    cout << "enter limit : ";
    cin >> limit;
    while(1){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double) arr[i]/koko);
        }
        if(sum<=limit){
            cout << "minimum value is "<< koko;
            break;
        }
        koko++;
    }
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    koko(arr,n);
}