#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void display(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeLinkedList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
}

int main()
{
    struct Node *head = NULL;

    for (int i = 1; i <= 10; i++)
    {
        insertAtEnd(&head, i);
    }

    printf("Linked List: ");
    display(head);

    freeLinkedList(head);

    return 0;
}
