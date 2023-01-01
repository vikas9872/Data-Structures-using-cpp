#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class LinkedList{
    public:
    void addFirst(Node* &head,int data){
        Node* newNode = new Node(data);
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void addLast(Node* &head, int data){
        Node* newNode=new Node(data);
        Node* currNode=head;
        if(head==NULL){
            head=newNode;
        }
        else{
            while(currNode->next!=NULL){
                currNode=currNode->next;
            }
            currNode->next=newNode;
        }
    }
    int deleteFirst(Node* &head){
        Node* currNode=head;
        if(head==NULL){
           cout << "No nodes to display" << endl;
        }
        head=head->next;
        free(currNode);
    }
    void deleteEnd(Node* &head){
        Node* currNode=head;
        Node* ptr;
        if(head==NULL){
            cout << "No nodes to display" << endl;
        }
        while(currNode->next!=NULL){
            ptr=currNode;
            currNode=currNode->next;
        }
        ptr->next=NULL;
        free(currNode);
    }
    void addatSpecific(Node* &head,int location,int data){
        Node* newNode=new Node(data);
        Node* currNode=head;
        for(int i=0;i<location;i++){
            if(currNode->next!=NULL){
                currNode=currNode->next;
            }
        }
        newNode->next=currNode->next;
        currNode->next=newNode;
    }
    void deletetSpecific(Node* &head,int location){
        Node* currNode=head;
        Node* previous;
        for(int i=0;i<=location;i++){
            previous=currNode;
            currNode=currNode->next;
        }
        previous->next=currNode->next;
        free(currNode);
    }
    void printList(Node* &head){
        Node* currNode=head;
        while(currNode!=NULL){
            cout << currNode->data << " -> ";
            currNode=currNode->next;
        }
        cout << "NULL";
    }
};
int main(){
    LinkedList ll;
    Node* head=NULL;
    int ch;
    int position;
    int element;
    do{
        cout << "\n1.AddFirst 2.AddLast 3.printList 4.DeleteFirst 5.DeleteLast 6.Insert at Specific position 7. Delete at Specific position 8.Exit" << endl;
        cout << "Enter the choice: " << endl;
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the element: " << endl;
                    cin >> element;
                    ll.addFirst(head,element);
                    break;
            case 2: cout << "Enter the element: " << endl;
                    cin >> element;
                    ll.addLast(head,element);
                    break;
            case 3: ll.printList(head);
                    break;
            case 4: ll.deleteFirst(head);
                    break;
            case 5: ll.deleteEnd(head);
                    break;
            case 6: cout << "Enter the position: ";
                    cin >> position;
                    cout << "Enter the element:";
                    cin >> element;
                    ll.addatSpecific(head,position,element);
                    break;
            case 7: cout << "Enter the position: ";
                    cin >> position;
                    ll.deletetSpecific(head,position);
            case 8: exit(0);
        }
    }while(1);
}