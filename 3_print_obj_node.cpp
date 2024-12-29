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


int main(int argc, char const *argv[])
{
    //node object (head is object name)
    // node* head = NULL;
    // or
    node* head = new node(15);
    node * a = new node(20);
    node * b = new node(30);

    //attached the node connection
    head->next = a;
    a->next = b;
    
    //to print the entire list we requre a temp node to traverse
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    return 0;
}
