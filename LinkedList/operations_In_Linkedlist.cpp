#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}

void insertAtPos(node* &head, int val,int pos){
    node* n = new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        if (temp->data==pos)
        {
            n->next = temp->next;
            temp->next=n;
            return;
        }
        temp = temp->next;
    }
}

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head = n;
}

int search(node* &head, int key){
    node* temp = head;
    while (temp->next!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void DeleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void DeleteNode(node* &head, int val){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL || head->data==val)
    {
        DeleteAtHead(head);
        return;
    }
    node* temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;
    }
    node* ToDelete = temp->next;
    temp->next=temp->next->next;
    delete ToDelete;
}

void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main ()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    // insertAtHead(head,1);
    // insertAtHead(head,4);
    display(head);
    // cout<<search(head,2);
    // DeleteNode(head,4);
    // DeleteAtHead(head);
    // insertAtPos(head,5,4);
    display(head);
    return 0;
}