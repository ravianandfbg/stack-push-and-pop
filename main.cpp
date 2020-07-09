#include<iostream>
#include<stdlib.h>
using namespace std;
   int top=-1,stack[50],item;
    void push(int item)
    {
        if(top==49)
        {
            cout<<"Overflow and exit"<<endl;
        }
        else
        {
           top=top+1;
        stack[top]=item;
    }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Underflow and exit"<<endl;
        }
        else{
            item=stack[top];
            top=top-1;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Please try again"<<endl;
        }
            else
                {
                for(int i=top;i>=0;i--)
                    cout<<stack[i]<<endl;
                }
    }

    int main()
    {
    int choice,item;
    cout<<"Press 1 for PUSH: "<<endl;
    cout<<"Press 2 for POP: "<<endl;
    cout<<"Press 3 for display: "<<endl;
    cout<<"Press 4 for Exit: "<<endl;
    do
    {
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter number: "<<endl;
            cin>>item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Please enter valid choice"<<endl;

        }
       } while(choice!=4);
    }


