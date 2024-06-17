#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* create_node(int data);
void add_first(int data);
void display();
void add_last(int data);

int main()
{
    add_first(10);
    add_first(20);
    add_first(30);
    add_last(40);
    add_last(50);
    add_last(60);

    display();

    return 0;
}

struct node* create_node(int data) // 10
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if(ptr == NULL)
        printf("Memory not created !");
    else
    {
        ptr->data = data; // 10
        ptr->next = NULL;
    }
    return ptr; // 500
}

void add_first(int data) // 10
{
    // create a node
    struct node *ptr = create_node(data); // 10
    // attach the node at first position
    // sen 1: if list is empty
    if(head == NULL)
    {
        head = ptr;
    }
    else // sen 1 : if list contains multiple nodes
    {// attach node at 1st position
        // step 1 : attach new node to 1st node
        ptr->next = head;
        // step 2 : attach head to new node
        head = ptr;
    }
}


void display()
{
    if(head == NULL)
        printf("List is Empty !");
    else
    {
       struct node *temp = head;
       printf("Head");
       while(temp != NULL)
       {
        printf("->%d",temp->data);
        temp = temp->next;
       }
    }
}

void add_last(int data)
{
    struct node *ptr = create_node(data);

    if(head == NULL)
        head = ptr;
    else
    {
        // take a temp pointer to traverse till last node
        struct node *temp = head;
    // traverse till last node
        while(temp->next != NULL) // to stop at the last node
        {
            temp = temp->next;
        }
        // attach the new node at the last position
        temp->next = ptr;

    }
}