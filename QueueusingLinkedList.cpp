#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class Queue{
    public:
    Node* front;
    Node* back;

    Queue(){
        front=NULL;
        back=NULL;
    }
    void enqueue(int value){
        Node* newNode=new Node(value);
        if(front==NULL){
            front=newNode;
            back=newNode;
            return;
        }
        else{
            back->next=newNode;
            back=newNode;
        }
    }
    void dequeue(){
        if(front==NULL){
            cout << "No nodes to delete" << endl;
        }
        else{
            Node* temp=front;
            int data=front->data;
            cout << "Deleted element: " << data << endl;
            front=front->next;
            free(temp);
        }
    }
    void display(){
        Node* temp=front;
        if(front==NULL){
            cout << "No nodes to display" << endl;
        }
        while(temp!=NULL){
            cout << temp->data << "->";
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main(){
    Queue q;
    int ch;
    int element;
    do{
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Exit" << endl;
        cout << "Enter the choice: " << endl;
        cin >> ch;
        switch (ch)
        {
            case 1: cout << "Enter the element: " << endl;
                    cin >> element;
                    q.enqueue(element);
                    break;
            case 2: q.dequeue();
                    break;
            case 3: q.display();
                    break;
            case 4: exit(0);
        }
    }while(1);
}