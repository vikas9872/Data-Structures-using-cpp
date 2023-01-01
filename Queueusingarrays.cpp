#include<iostream>
#define n 5
using namespace std;
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int element){
    if(rear==n-1){
        cout << "Queue is full" << endl;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=element;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        cout << "Queue is Empty";
    }
    else{
        int deleteddata=queue[front];
        cout << "Deleted element is: " << deleteddata << endl;
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front++;
        }
    }
}
void search(int var){
    for(int i=front;i<=rear;i++){
        if(queue[i]==var){
            cout << "Element is found and is at " << i << " position" << endl;
        }
        else{
            cout << "Element is not found" << endl;
        }
    }
}
void display(){
    cout <<  "Elements in the queue are: " << endl;
    for(int i=front;i<=rear;i++){
        cout << queue[i] << " ";
    }
}
int main(){
    int val;
    int ch;
    do{
        cout << endl << "1.Enqueue 2.Display 3.Dequeue 4.Search 5.Exit";
        cout << endl << "Enter the choice :";
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the value: ";
                    cin >> val;
                    enqueue(val);
                    break;
            case 2: display();
                    break;
            case 3: dequeue();
                    break;
            case 4: cout << "Enter the value: ";
                    cin >> val;
                    search(val);
                    break;
            case 5: exit(0);
                    break;
        }
    }while(1);

}