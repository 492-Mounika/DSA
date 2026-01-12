#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void insert_at_end(struct Node** head,int k){
    struct Node* temp, *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = k;
    newNode->next = NULL;
    temp = *head;
    if(*head == NULL) *head = newNode;
    else{
        while(temp->next != NULL){
           temp = temp->next; 
        }
        temp->next = newNode;
    }
}
void printLinkedList(struct Node** head) {
    struct Node* temp = *head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main(){
    int arr[] = {29,20,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 143;
    struct Node *head = NULL,*temp = NULL, *nNode;
    for(int i = 0;i<n;i++){
        nNode = (struct Node*)malloc(sizeof(struct Node));
        nNode->data = arr[i];
        nNode->next = NULL;
        if(head == NULL){
            head = nNode;
            temp = head;
        }
        else{
            temp->next = nNode;
            temp = nNode;
        }
    } 
    insert_at_end(&head,k);
    printLinkedList(&head);
}

