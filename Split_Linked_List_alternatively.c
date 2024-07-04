Given the linked list.Split it into two linked list with alternate nodes

Input : n=5
        arr=1 2 3 4 5
  
Output: list 1: 1 3 5
        list 2: 2 4

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *list1 = NULL;
struct node *list2 = NULL;

void create(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = value;
    if (head == NULL) {
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void splitLinkedList() {
    struct node *temp = head;
    int count = 0;
    while (temp != NULL) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->data = temp->data;
        if (count % 2 == 0) {
            if (list1 == NULL) {
                list1 = newnode;
            } else {
                struct node *t = list1;
                while (t->next != NULL) {
                    t = t->next;
                }
                t->next = newnode;
            }
        } else {
            if (list2 == NULL) {
                list2 = newnode;
            } else {
                struct node *t1 = list2;
                while (t1->next != NULL) {
                    t1 = t1->next;
                }
                t1->next = newnode;
            }
        }
        temp = temp->next;
        count++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        create(a[i]);
    }
    splitLinkedList();
    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);
    return 0;
}
