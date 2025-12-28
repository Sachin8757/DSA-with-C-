#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            head = head->next;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            temp->next=NULL;
            temp=tail;

        }
    }
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(9);
    ll.printList();
    ll.pop_back();
    ll.pop_back();
    ll.pop_back();
    ll.printList();

    return 0;
}