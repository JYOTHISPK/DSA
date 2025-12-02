/*
--------------------------------------------
Problem     : Seearch Node In Linked List.
Category    : Linked List 
Language    : C++
Author      : Jyothis P K
Date        : 02-12-2025

Time Complexity            : O(n) (traverse through linked list)
Auxiliary Space Complexity : O(1) (extra space required)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;

    node(int value){
        data=value;
        next=nullptr;
    }
};

void insert(node* head){
    for(int i=1;i<5;i++){
        node * temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        node *newnode=new node(i);
        temp->next=newnode;
        temp=temp->next;
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
    node * head=new node(0);
    insert(head);

    display(head);

    int target;
    cout << "\nenter value to search : ";
    cin >> target;

    //search linked list
     node * temp=head;
    int count=0,flag=0;
    while(temp!=nullptr){
        if(temp->data==target){
            flag=1;
            break;
        }
        count++;
        temp=temp->next;
    }
    cout << endl;
    if(flag)   cout << "target is in node " << count+1;
    else    cout << "target not found"; 
}