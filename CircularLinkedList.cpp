#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularLinkedList{
    public:
    void insertatHead(Node* &head,int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            newNode->next=newNode;
            head=newNode;
            return;
        }
        Node* currNode=head;
        while(currNode!=head){
            currNode=currNode->next;
        }
        currNode->next=newNode;
        newNode->next=head;
        head=newNode;
    }
    void insertatTail(Node* &head,int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            insertatHead(head,val);
            return;
        }
        Node* currNode=head;
        while(currNode->next!=head){
            currNode=currNode->next;
        }
        currNode->next=newNode;
        newNode->next=head;
    }
    void printList(Node* head){
        Node* currNode=head;
        do{
            cout << currNode->data << "->";
            currNode=currNode->next;
        }while(currNode!=head);
        cout << head->data;
    }
};
int main(){
    Node* head=NULL;
    CircularLinkedList cll;
    int ch;
    int element;
    do{
        cout << "\nENTER THE CHOICE: " << endl;
        cout << "1. InsertatHead 2. InsertatTail 3.PrintList" << endl;
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the element: ";
                    cin >> element;
                    cll.insertatHead(head,element);
                    break;
            case 2: cout << "Enter the element: ";
                    cin >> element;
                    cll.insertatTail(head,element);
                    break;
            case 3: cll.printList(head);
                    break;
        }
    }while(1);
}