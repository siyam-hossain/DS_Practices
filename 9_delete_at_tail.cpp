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
//delete at head
void del_at_tail(node* head);
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

    cout<<"Before delete a tail"<<endl;
    print(head);
    
    cout<<"Before delete a tail"<<endl;
    del_at_tail(head);
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

void del_at_tail(node* head)
{
    node* temp = head;
    while (temp->next != NULL)
    {
        // cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<temp->value<<endl;
    delete temp->next;
    temp->next = NULL;

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