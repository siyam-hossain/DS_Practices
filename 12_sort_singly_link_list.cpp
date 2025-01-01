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
void print(node* head);
//sort link list
void sort_link_list(node* head);

int main(int argc, char const *argv[])
{
    node* head = NULL;
    node* tail = NULL;


    int value;
    while (cin>>value && value != -1)
    {
        in_at_tail(head,tail,value);
    }

    sort_link_list(head);
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

void print(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }cout<<endl;
}
void sort_link_list(node* head)
{
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if(i->value>j->value) swap(i->value,j->value);
        }
    }
    // for (node *temp = head; temp != NULL; temp = temp->next)
    // {
    //     cout<<temp->value<<" ";
    // }
}