#include<iostream>
using namespace std;
int stack[5];
int n=5;
int top=-1;
void push(int element){
    if(top==n-1){
        cout << "Overflow";
    }
    else{
        top++;
        stack[top]=element;
    }
}
void pop(){
    if(top==-1){
        cout << "Underflow";
    }
    else{
        top--;
    }
}
void display(){
    //for(int i=top;i>=0;i--){
        cout << stack[top];
    //}
}
void Displapelementspresent(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            cout << stack[i] << " ";
        }
    }
}
int main(){
    int val;
    int ch;
    do{
        cout << endl << "1.Push 2.Display 3.Pop 4.Display all elements present";
        cout << endl << "Enter the choice :";
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the value: ";
                    cin >> val;
                    push(val);
                    break;
            case 2: display();
                    break;
            case 3: pop();
                    break;
            case 4: Displapelementspresent();
                    break;
        }
    }while(1);
}