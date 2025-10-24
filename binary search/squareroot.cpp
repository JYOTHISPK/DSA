/*
Problem     : Square Root Of Any Number.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 24-10-2025
Description : Find square root of any number with 
              time complexity O(log n).
              If the number is not a perfect square,
              then return the floor value of sqrt(n).
Time Complexity : o(log n) 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int square(int n){
    int low=0,high=n-1,count=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(!mid)    break;
        count++;
        high=mid-1;
        }
        count/=2;
        return pow(2,count);
    }

int  main(){
    cout << "enter a number : ";
    int n;
    cin >> n;
    int ans=square(n);
    cout << "output : " << ans;
}
