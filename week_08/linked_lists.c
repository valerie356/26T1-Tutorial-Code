// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    // TODO
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // TODO
    // Step 1 - create new node
    struct node *new = create_node(data);
    new->next = head;
    head = new;
    return head;
}

struct node *insert_tail(struct node *head, int data) {
    // TODO
    
    struct node *new = create_node(data);

    // Case 1: 0 node currently: head == NULL;
    if (head == NULL) {
        head = new;
        return head;
    }
    // Case 2: only 1 node atm: head->next == NULL;
    
    struct node *current = head;
    while (current->next != NULL) {
        
        current = current->next;
    }
    // current stores the address of the last node

    current->next = new;
    return head;
}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    struct node *current = head;
    int length = 0;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}
