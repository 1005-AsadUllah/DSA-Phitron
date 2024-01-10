#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *NewNode = new Node(v);
    if (head == NULL)
    {
        head = NewNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp akhon last node a.
    tmp->next = NewNode;
}
void insert_at_position(Node * head,int p,int v){
    Node *newnode= new Node (v);
    Node * tmp = head;
    for(int i=1;i<=p-1;i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<"Inserted at position"<<endl<<endl;

}
void print_linked_list(Node *head)
{
    cout << "Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {

        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 : Insert at tail!............." << endl;
        cout << "Option 2 : print  linked list!........." << endl;
        cout << "Option 3 : insert at any position......" << endl;
        cout << "Option 4 : Terminate!.................." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Enter value to insert: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op == 3){
            int pos;
            cout<<"Enter Position...... : "<<endl;
            cin>>pos;
            int val;
            cout<<"Enter Value...... : "<<endl;
            cin>>val;
            insert_at_position(head,pos,val);

        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}