#include "stack_header.h"
void Stack::push(string n,int a,int tn,string tc)
{
    Node *temp = new Node();
    temp->name = n;
    temp->age = a;
    temp->ticket_number = tn;
    temp->travel_class = tc;
    temp->next = top;
    top = temp;
    cout<<"Passenger details pushed into stack.\n\n";
}
void Stack::pop()
{
    if(top==NULL)
    {
        cout<<"Stack underflow.\n";
    }
    else
    {
        Node *temp = new Node();
        temp = top;
        cout<<"\n======POPPED DATA======\n";
        cout<<"Passenger Name : "<<temp->name<<endl;
        cout<<"Passenger Age : "<<temp->age<<endl;
        cout<<"Ticket Number : "<<temp->ticket_number<<endl;
        cout<<"Travel Class : "<<temp->travel_class<<"\n\n";
        top = temp->next;
        free(temp);
    }
}
void Stack::display()
{
    if(top==NULL)
    {
        cout<<"Stack is empty.\n";
    }
    else
    {
        Node *temp = new Node();
        temp = top;
        cout<<"\n\n=======PASSENGER DETAILS=======";
        while(temp != NULL)
        {
            cout<<"\nName : "<<temp->name<<endl;
            cout<<"Age : "<<temp->age<<endl;
            cout<<"Ticket Number : "<<temp->ticket_number<<endl;
            cout<<"Travel Class : "<<temp->travel_class<<endl;
            temp = temp->next;
        }
        cout<<"===============================\n\n";
    }
}