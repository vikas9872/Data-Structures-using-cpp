#include<iostream>
#include<list>
using namespace std;
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); it++)
        cout <<*it << " ";
    cout <<'\n';
}
int main(){
    list<int> l;
    int ch;
    int element;
    do{
        cout << "1.Push Front 2.Push Back 3.Pop Front 4.Pop Back 5.Reverse 6.Sort 7.Display" << endl;
        cout << endl << "Enter the choice: ";
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter the elements into the list: ";
                    cin >> element;
                    l.push_front(element);
                    break;
            case 2: cout << "Enter the element to the list: ";
                    cin >> element;
                    l.push_back(element);
                    break;
            case 3: l.pop_front();
                    break;
            case 4: l.pop_back();
                    break;
            case 5: l.reverse();
                    break;
            case 6: l.sort();
                    break;
            case 7: showlist(l);
        }
    }while(1);
}