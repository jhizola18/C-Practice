#include<iostream>
using namespace std;

struct Node{
    int data;

    Node *next;
};
Node *head = NULL;

void addBeg(int data){

    Node *node = new Node();
    node->data = data;
    node->next = head;
    head = node;
}

void addTail(int data){

    Node *node = new Node();
    node->data = data;
    node->next = NULL;
    if(head == NULL){
        head = node;
    }else{
        Node *temp;
        while(head->next != NULL){
            temp=temp->next;
        }
        temp->next = node;
    }
}

void deleteNode(){

    Node *node = head;
    head = node->next;
    free(node);
}

void deleteTail(){

    Node *node, *prev;
    if(head == NULL){
        cout << "List Empty";
    }else if(head->next == NULL){
        node = head;
        head = node->next;
        free(node);
    }else{
        node = head;
        while(head->next != NULL){
            prev = node;
            node=node->next;
        }
        prev->next = NULL;
        free(node);
    }

}

