#include<bits/stdc++.h>
using namespace std;

void merge(int low,int mid,int high,int arr[]){
    int i=low,j=mid+1;
    int temp[high-low+1],ind=0;

    while(i<=mid && j<=high){
        if(arr[i]<=arr[j])   temp[ind++]=arr[i++];
        else    temp[ind++]=arr[j++];
    }

    while(i<=mid)   temp[ind++]=arr[i++];
    while(j<=high)   temp[ind++]=arr[j++];
    ind=0;
    for(int k=low;k<=high;k++)    arr[k]=temp[ind++];

}

void go_to_merge(int low,int high,int arr[]){
    if(low>=high) return;
    int mid=(low+high)/2;
    go_to_merge(low,mid,arr);
    go_to_merge(mid+1,high,arr);
    merge(low,mid,high,arr);
}

int main(){
    int arr[]={7,6,5,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    go_to_merge(0,n-1,arr);
    cout << "sorted array is : ";
    for(int i:arr)  cout << i << " ";
}