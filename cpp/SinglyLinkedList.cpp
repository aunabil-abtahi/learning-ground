#include<iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int val, Node* ptr)
    {
        value = val;
        next = ptr;
    }
};

int main()
{
    Node* one = new Node(1, nullptr);
    Node* two = new Node(3, nullptr);
    Node* three = new Node(5, nullptr);
    Node* head;


    one->next = two;
    two->next =  three;

    //Linked List Traversal
    //print all the values of the linked list//
    head = one;
    while(head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;

    // insert node at last element
    Node* new_node = new Node(7, nullptr);
    three->next = new_node;

    head = one;
    while(head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;


    //insert new node at middle
    Node* new_node1 = new Node(4, nullptr);
    new_node1->next = two->next;
    two->next = new_node1;
    head = one;
    while(head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;

    head = one;
    //insert new node at beginning
    Node* new_node2 = new Node(0, nullptr);
    new_node2->next = head;
    head = new_node2;

    while(head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}
