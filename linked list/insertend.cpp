/*
--------------------------------------------
Problem     : Insertion At End And Display Operations In Linked List.
Category    : Linked List 
Language    : C++
Author      : Jyothis P K
Date        : 02-12-2025

Time Complexity : O(n) (traverse through linked list)
Space Complexity: O(n) (space for structure) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void insert(node* head,int arr[]){
    for(int i=1;i<5;i++){
        node * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node *newnode=new node;
        temp->next=newnode;
        temp=temp->next;
        temp->data=arr[i];
        temp->next=NULL;
    }
}

void display(node *head){
    node * temp=head;
    while(temp->next!=NULL){
        cout << temp->data << " -> ";
        temp=temp->next;
    }
    cout << temp->data << " -> NULL ";
}

int main(){
    int arr[]={1,2,3,4,5};
    node *head=new node;
    head->data=arr[0];
    head->next=NULL;
    insert(head,arr);
    display(head);
}