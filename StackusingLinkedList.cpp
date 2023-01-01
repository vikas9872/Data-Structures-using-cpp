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
Node* top;
class Stack{
    public:
    void push(int val){           // push function is same as insertion at head in linked list
        Node* newNode=new Node(val);
        if(top==NULL){
            top=newNode;
        }
        else{
            newNode->next=top;
            top=newNode;
        }
    }
    void pop(){
        Node* temp=top;
        if(top==NULL){
            cout << "No Nodes to delete";
        }
        else{
            int data=top->data;
            cout << "Deleted data is: " << data;
            top=top->next;
            free(temp);
        }
    }
    void peek(){
        if(top==NULL){
            cout << "No nodes to display";
        }
        else{
            cout << "Top most element: " << top->data << endl;
        }
    }
    void display(){
        Node* temp=top;
        if(top==NULL){
            cout << "Stack Underflow";
        }
        else{
            while(temp!=NULL){
                cout << temp->data << "->";
                temp=temp->next;
            }
            cout << "NULL";
        }
    }
};
int main(){
    Stack s;
    int ch;
    int element;
    do{
        cout << "\n1.Push 2.Pop 3.Peek 4.Display" << endl;
        cout << "Enter the choice: " << endl;
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the element: " << endl;
                    cin >> element;
                    s.push(element);
                    break;
            case 2: s.pop();
                    break;
            case 3: s.peek();
                    break;
            case 4: s.display();
                    break;
        }
    }while(1);
}