#include <iostream>
using namespace std;
class Node
{
    public:
        int ticket_number,age;
        string name,travel_class;
        Node *next;
};
class Stack
{
    public:
        Node *top;
        Stack()
        {
            top = NULL;
        }
        void push(string n,int a,int tn,string tc);
        void pop();
        void display();
};