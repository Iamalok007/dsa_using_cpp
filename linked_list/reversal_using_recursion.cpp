#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;

void recursion(struct Node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    recursion(p->next);
    struct Node *q = p->next;
    q->next = p;
    p->next = NULL;
}

void print(struct Node *p)
{
    if (p == NULL) return;
    cout << p->data;
    print(p->next);
}

struct Node *insert(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return head;
}
int main()
{
    struct Node *head = NULL;

    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    print(head);
    cout << "\n";
    recursion(head);
    print(head);
}
