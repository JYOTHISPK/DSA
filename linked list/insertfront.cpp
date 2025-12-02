/*
--------------------------------------------
Problem     : Insertion At Front And Display Operations In Linked List.
Category    : Linked List 
Language    : C++
Author      : Jyothis P K
Date        : 02-12-2025

Time Complexity : O(1) 
Space Complexity: O(n) (space for structure) 
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

int main(){

    node* head=nullptr;

    int choice;
    cout << " choose option : 1.insert 2.display 3.exit : ";
    cin >> choice;
    while(1){
        if(choice==1)   insert(head);
        else if(choice==2)  display(head);
        else if(choice==3)   break; 
        else    cout << "invalid choice";
        cout << " choose option : 1.insert 2.display 3.exit : ";
        cin >> choice;  
    }


}