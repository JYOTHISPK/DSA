/*
--------------------------------------------
Problem     : Insertion,Display,Deletion Operations In Linked List.
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
    node * next;

    node(int value){
        data=value;
        next=nullptr;
    }
};

void insert(node* &head){
    int input;
    cout << "enter data to insert : ";
    cin >> input;
    node* temp=new node(input);
    if(head!=nullptr)   temp->next=head;
    head=temp;
}

void display(node* head){
    if(head==nullptr){
        cout  <<"empty list" << endl; 
        return;
    }  
    node* temp=head;
    while(temp->next!=nullptr){
        cout << temp->data << " -> ";
        temp=temp->next;
    }
    cout << temp->data << " -> NULL\n";
}

void deletion(node* &head){
    if(head==nullptr){
        cout  <<"empty list" << endl; 
        return;
    }
    int input;
    cout << "enter data to delete : ";
    cin >> input;
    node* previous=head;
    node* current=head;
    node* temp=head;
    node* temp1=head;
    int flag=0;
    while(temp->next!=nullptr){
        if(temp->data==input){
            flag=1;
            previous=temp1;
            current=temp;
        }
        temp1=temp;
        temp=temp->next;
    }
    if(flag){
        if(current==head){
            head=head->next;
        }
        else if(current->next==nullptr){
            previous->next=nullptr;
        }
        else{
            previous->next=current->next;
        }
        delete current;
    }
    else{
        cout << "no such input found"<< endl;;
    }
}

int main(){

    node* head=nullptr;

    int choice;
    cout << " choose option : 1.insert 2.display 3.delete 4.exit : ";
    cin >> choice;
    while(1){
        if(choice==1)   insert(head);
        else if(choice==2)  display(head);
        else if(choice==3)  deletion(head);
        else if(choice==4)   break; 
        else    cout << "invalid choice";
        cout << " choose option : 1.insert 2.display 3.delete 4.exit : ";
        cin >> choice;  
    }
}