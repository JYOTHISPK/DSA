#include<bits/stdc++.h>
using namespace std;

int quicksort(int arr[],int start,int pivot){
    int i=start-1,j=start;
    while(j<pivot){
        if(arr[j]<arr[pivot])  swap(arr[++i],arr[j]);
        j++;
    }
    swap(arr[++i],arr[pivot]);
    return i;
}

void partition(int arr[],int start,int end){
        if(start >= end) return;

    int pivot = quicksort(arr, start, end);

    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int main(){
    int arr[]={2,3,7,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    partition(arr,0,n-1);
    for(auto i:arr)  cout << i << " ";
}