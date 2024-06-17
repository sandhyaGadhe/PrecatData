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
void add_at_specific_position(int data,int pos);
void delete_first();
void delete_last();
void delete_specific_position(int pos);

int main()
{
    add_first(10);
    add_first(20);
    add_first(30);
    add_last(40);
    add_last(50);
    add_last(60);

  //  display();

    add_at_specific_position(70,3);
  //  display();
    add_at_specific_position(80,-2);
    add_at_specific_position(90,15); // data is the data, 15 is the position
    display();
    delete_first();
    display();
    delete_last();
    display();
    delete_specific_position(4);
    display();
    delete_specific_position(-2);
    display();
    delete_specific_position(10);
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
       printf("\n");
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

void add_at_specific_position(int data,int pos)
{
    if(head == NULL || pos <= 1)
        add_first(data);
    else
    {
        struct node *ptr = create_node(data);
        struct node *trav = head;
        for(int i = 1;i<pos-1;i++) // 20-1 : <19
        {
            if(trav->next == NULL)
                break;
            else
                trav = trav->next;
        }
        ptr->next = trav->next;
        trav->next = ptr;
    }
}

void delete_first()
{
    if(head == NULL)
        printf("List is Empty !");
    else if(head->next == NULL) // if the list contains only 1 node
    {
        free(head);
        head = NULL; // to avoid dangling pointer
    }
    else // if the list contains multiple nodes
    {
        // take a temp pointer variable to store the address of 1st node
        struct node *temp = head;
        // attach the 2nd node tto head pointer
        head = head->next; // or head = temp->next
        // free the 1st node
        free(temp);
        temp = NULL;
    }
}

void delete_last()
{
    if(head == NULL)
    {
        printf("List is Empty !");
    }
    else if(head->next == NULL) 
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *trav = head;
        while(trav->next->next != NULL) // to traverse till 2nd last node
        {
            trav = trav->next;
        }
        free(trav->next);
        trav->next = NULL;
    }
}

void delete_specific_position(int pos)
{
    int flag = 1;
    if(head == NULL)
        printf("List is Empty !");
    else if(head->next == NULL || pos <= 1)
        delete_first();
    else
    {
        struct node *trav = head;
        for(int i =1;i < pos-1;i++) // if linked contains 10 nodes and pos = 15
        {
            if(trav->next == NULL)
            {
                delete_last();
                flag = 0;
                break;
            }
            else
                trav  = trav->next;
        }

        if(flag == 1)
        {
            struct node *temp = trav->next;
            trav->next = temp->next; 
            //or  trav->next = trav->next->next
            free(temp);
            temp = NULL;
        }
    }
}