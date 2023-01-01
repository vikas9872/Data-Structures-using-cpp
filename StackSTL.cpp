//Stack is based on LIFO
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int ch;
    int element;
    do{
        cout << "\n1.Push 2.Pop 3.Top 4.Size" << endl;
        cout << "Enter the choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: cout << "Enter the elements into the stack: " << endl;
                cin >> element;
                s.push(element);
                break;
        case 2: s.pop();
                break;
        case 3: cout << endl << s.top();
                break;
        case 4: cout << endl << s.size();
        default:
            break;
        }
    }while(1);
}