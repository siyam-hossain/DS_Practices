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
void in_at_any_pos(node* &head, node* &tail, int value, int idx);
void print(node* head);

int main(int argc, char const *argv[])
{
    node* head = NULL;
    node* tail = NULL;


    int value;
    while (cin>>value && value != -1)
    {
        in_at_tail(head,tail,value);
    }

    in_at_any_pos(head,tail,500,2);
    print(head);
    
    
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
void in_at_any_pos(node* &head, node* &tail, int value, int idx)
{
    if(idx>0)
    {
        node* temp = head;
        for (int i = 0; i < idx-1; i++)
        {
            temp = temp->next;
        }
        
        node* newNode = new node(value);
        
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return;
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