#include<bits/stdc++.h>
using namespace std;

//This is the node
class node
{
    public:
    
    int value;
    node* next;
    
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void in_at_tail(node* &head, node* &tail, int value);
void reverse(node* temp);


int main(int argc, char const *argv[])
{
    node* head = NULL;
    node* tail = NULL;


    int value;
    while (cin>>value && value != -1)
    {
        in_at_tail(head,tail,value);
    }

    reverse(head);
    
    
    return 0;
}

void in_at_tail(node* &head, node* &tail, int value)
{
    node* newNode = new node(value);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


void reverse(node* temp)
{
    if(temp == NULL)
    {
        return;
    }
    reverse(temp->next);
    cout<<temp->value<<" ";
    
}