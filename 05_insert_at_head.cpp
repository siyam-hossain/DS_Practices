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

void in_at_head(node* &head, node* &tail, int value);
void print(node* head);

int main(int argc, char const *argv[])
{
    node* head = NULL;
    node* tail = NULL;


    int value;
    while (cin>>value && value != -1)
    {
        in_at_head(head,tail,value);
    }

    print(head);
    
    
    return 0;
}

void in_at_head(node* &head, node* &tail, int value)
{
    node* newNode = new node(value);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void print(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }cout<<endl;
}