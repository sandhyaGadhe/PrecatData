// SCLL
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head = NULL;

node* create_node(int data);
void add_first(int data);
void add_last(int data);
void display();
void delete_first();
void delete_last();

int main()
{
    add_first(10);
    add_first(20);
    display();
    add_last(30);
    add_last(40);
    display();
    delete_first();
    display();
    delete_last();
    display();
    return 0;
}

node* create_node(int data)
{
     node *new_node = (node *)malloc(sizeof(node));
     if(new_node == NULL)
        printf("Malloc Failed !");
    else
    {
        new_node->data = data;
        new_node->next = NULL;
    }
    return new_node;
}

void add_first(int data)
{
    // create a node
    node *new_node = create_node(data);

    if(head == NULL)
    {
        head = new_node;
        new_node->next = head; // new_node->next = new_node
    }
    else 
    {
        node *trav = head;
        while(trav->next != head)
        {
            trav = trav->next;
        }
        new_node->next = head;
        head = new_node;
        trav->next = new_node; // trav->next = head
    }
}

void add_last(int data)
{
    node *new_node = create_node(data);

    if(head == NULL)
    {
        head = new_node;
        new_node->next = new_node; // circular
    }
    else
    {
        node *trav = head;
        while(trav->next != head)
        {
            trav = trav->next;
        }
        trav->next = new_node;
        new_node->next = head;
    }
}

void display()
{
    if(head == NULL)
        printf("List is Empty !");
    else
    {
        node *trav = head;
        printf("Head");
        do
        {
            printf("->%d",trav->data);
            trav = trav->next;
        }while(trav != head);
        printf("\n");
    }
}

void delete_first()
{
    if(head == NULL)
        printf("List is Empty !");
    else if(head->next == head) // if list contains only 1 node
    {
        free(head);
        head = NULL;
    }
    else
    {
        node *temp = head;
        node *trav = head;
        while(trav->next != head)
        {
            trav = trav->next;
        }
        head = head->next; // head = temp->next
        trav->next = head;
        free(temp);
        temp = NULL;
    }
}

void delete_last()
{
    if(head == NULL)
        printf("List is Empty !");
    else if(head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        node *trav = head;
        while(trav->next->next != head) // traverse till 2nd last node
        {
            trav = trav->next;
        }
        free(trav->next); // free the last node
        trav->next = head; // attach the new last node to head

    }
}