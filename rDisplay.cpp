#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void create(int A[], int n)
{
    
    int i;
    Node *t, *last;
    Node *first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        Node *t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << " -->" << p->data;
        p = p->next;
    }
    cout << " \n";
}
void RDisplay(Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        cout << " ->" << p->data;
    }
    cout << " \n";
}
int main()
{
    Node* first = new Node;
    Node *first=NULL;
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    Display(first);
    RDisplay(first);

    return 0;
}