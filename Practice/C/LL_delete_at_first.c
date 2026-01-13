#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void delete_at_first(struct Node **head){
    if(*head == NULL) printf("Underflow");
    else{
        struct Node* curr_node;
        curr_node = *head;
        *head = (*head)->next;
        free(curr_node);
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

int main() {
	int arr[] = {100,24,29,21,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	struct Node *head=NULL,*temp=NULL, *nNode;
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
    delete_at_first(&head);
    printLinkedList(&head);
}

