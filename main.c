#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct LinkedList
{
    struct Node *head;
};

struct LinkedList *createList();

void insertAtBeginning(struct LinkedList *list, int data);

void insertAtEnd(struct LinkedList *list, int data);

void deleteNode(struct LinkedList *list, int data);

void printList(struct LinkedList *list);

void freeList(struct LinkedList *list);

struct LinkedList *createList()
{
    struct LinkedList *list = (struct LinkedList *) malloc(sizeof(struct LinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}

void insertAtBeginning(struct LinkedList *list, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    if (newNode != NULL)
    {
        newNode->data = data;
        newNode->next = list->head;
        list->head = newNode;
    }
}

void insertAtEnd(struct LinkedList *list, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    if (newNode != NULL)
    {
        newNode->data = data;
        newNode->next = NULL;

        if (list->head == NULL)
        {
            list->head = newNode;
        } else
        {
            struct Node *current = list->head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
}

void deleteNode(struct LinkedList *list, int data)
{
    struct Node *current = list->head;
    struct Node *prev = NULL;

    while (current != NULL && current->data != data)
    {
        prev = current;
        current = current->next;
    }

    if (current != NULL)
    {
        if (prev == NULL)
        {
            list->head = current->next;
        } else
        {
            prev->next = current->next;
        }
        free(current);
    }
}

void printList(struct LinkedList *list)
{
    struct Node *current = list->head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeList(struct LinkedList *list)
{
    struct Node *current = list->head;
    while (current != NULL)
    {
        struct Node *next = current->next;
        free(current);
        current = next;
    }
    free(list);
}

int main(void)
{
    struct LinkedList *list = createList();

    insertAtEnd(list, 10);
    insertAtEnd(list, 20);
    insertAtBeginning(list, 5);

    printf("Linked List: ");
    printList(list);

    deleteNode(list, 20);
    printf("After deleting 20: ");
    printList(list);

    freeList(list);
    return 0;
}
