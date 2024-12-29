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
    return 0;
}
