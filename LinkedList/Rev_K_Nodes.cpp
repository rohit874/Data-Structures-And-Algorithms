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

node * Rev_K_Node(node* &head,int k){
    node* prev = NULL;
    node* curr = head;
    node* next;
    int count =0;
    while (curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL){
        head->next = Rev_K_Node(next,k);
    }
    return prev; 
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
    display(head);
    // head = reverse(head);
    // display(head);
    node* newhead = Rev_K_Node(head,2);
    display(newhead);
    return 0;
}