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
    
    node* head = NULL;
    
    //here we take input from user
    int value;
    while (cin>>value && value != -1)
    {
        node* new_node = new node(value);

        new_node->next = head;
        head = new_node;
    }
    
    node* temp = head;
    cout<<"head->";
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"->tail"<<endl;
    
    return 0;
}
