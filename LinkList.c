#include<stdio.h>
#include<stdlib.h>
//#include <graphics.h>

struct Node {
    int data;
    struct Node* next;
};

//Create Snake head
void INITIAL(struct Node* n)
{
    struct Node* body_one = NULL;
    body_one = (struct Node*)malloc(sizeof(struct Node));

    n->data = 1;
    n->next = body_one;

    body_one->data = 0;
    body_one->next = NULL;
}

void SHOW(struct Node* n)
{
    while(n != NULL){
        printf(" %d ", n->data);
        n = n->next;
    }
}

void ADD(struct Node* n)
{
    struct Node* newbody = NULL;
    newbody = (struct Node*)malloc(sizeof(struct Node));

    while(n->next != NULL){
        printf(" %d ", n->data);
        n = n->next;
    }
    
    newbody->data = 0;
    newbody->next = NULL;
    n->next = newbody;
}

int main(){

    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));

    INITIAL(head);
    printf("\nA");
    SHOW(head);
    printf("\nB");
    ADD(head);
    printf("\nC");
    SHOW(head);
    printf("\nD");
    ADD(head);
    printf("\nE");
    SHOW(head);

    return 0;
}