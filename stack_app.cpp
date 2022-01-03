#include "stack_header.h"
int main()
{
    Stack *s = new Stack();
    int ch;
    int a,tn;
    string n,tc;
    do
    {
        cout<<"==========MENU==========\n";
        cout<<"\t1.Push\n";
        cout<<"\t2.Pop\n";
        cout<<"\t3.Display\n";
        cout<<"\t4.Exit\n";
        cout<<"========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the Passenger Name : ";
                cin>>n;
                cout<<"Enter the Passenger Age : ";
                cin>>a;
                cout<<"Enter the ticket number : ";
                cin>>tn;
                cout<<"Enter the travelling class : ";
                cin>>tc;
                s->push(n,a,tn,tc);
                break;
            case 2:
                s->pop();
                break;
            case 3:
                s->display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice.\n";
                break;
        }
    }while(ch != 4);
    return 0;
}