//Queue is based on FIFO 
#include<iostream>
#include<queue> 
using namespace std;
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << g.front() << " ";
        g.pop();
    }
    cout <<'\n';
}
int main(){
    queue<int> q;
    int ch;
    int element;
    do{
        cout << "\n1.Push 2.Pop 3.Display" << endl;
        cout << "Enter the choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: cout << "Enter the elements into the stack: " << endl;
                cin >> element;
                q.push(element);
                break;
        case 2: q.pop();
                break;
        case 3: showq(q);
                break;
        }
    }while(1);
}