#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void MakeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool DetectLoop(node *&head)
{
    node *slow = head;
    node *fast = head;
    int count = 0;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void DeleteCycle(node *&head)
{
    // node* slow = head;
    // node* fast = head;
    // do
    // {
    //    slow = slow->next;
    //    fast = fast->next->next;
    // } while (slow!=fast);

    // fast=head;
    // while (slow->next!=fast->next)
    // {
    //     slow = slow->next;
    //     fast = fast->next;
    // }
    // slow->next = NULL;
    
    node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }
    if (slow != fast)
        return;
    if (fast == head)
    {
        node *curr = head;
        while (curr->next != head){
            curr = curr->next;
        }
        curr->next = NULL;
    }
    else
    {
        slow = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    MakeCycle(head, 3);
    cout << DetectLoop(head);
    DeleteCycle(head);
    cout << DetectLoop(head);
    display(head);
    return 0;
}