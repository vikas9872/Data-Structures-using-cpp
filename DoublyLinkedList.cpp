#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DoublyLinkedList{
    public:
    void addFirst(Node* &head,int data){
        Node* newNode= new Node(data);
        newNode->next=head;
        if(head!=NULL){
            head->prev=newNode;
        }
        head=newNode;
    }
    void addLast(Node* &head,int data){
        Node* newNode=new Node(data);
        Node* currNode=head;
        if(head==NULL){
            addFirst(head,data);
        }
        while(currNode->next!=NULL){
            currNode=currNode->next;
        }
        currNode->next=newNode;
        newNode->prev=currNode;
    }
    void printList(Node* head){
        Node* currNode=head;
        while(currNode!=NULL){
            cout << currNode->data << "->";
            currNode=currNode->next;
        }
        cout << "NULL";
    }
};
int main(){
    DoublyLinkedList dll;
    Node* head=NULL;
    int ch;
    int element;
    //do{
    for(;;){
        cout << "\n 1.AddFirst 2.AddLast 2.printList" << endl;
        cout << "Enter the choice: " << endl;
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the element: " << endl;
                    cin >> element;
                    dll.addFirst(head,element);
                    break;
            case 2: cout << "Enter the element: " << endl;
                    cin >> element;
                    dll.addLast(head,element);
                    break;
            case 3: dll.printList(head);
                    break;
        }
    //}while(1);
    }
}