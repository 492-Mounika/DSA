#include <stdio.h>
struct Node{
    int data;
    struct Node* next;
};

void insert_after_node(struct Node **head, int given, int k){
    if(*head == NULL){
        printf("Can't insert");
    }
    else{
        struct Node *nNode,*temp,*temp2;
        nNode = (struct Node*)malloc(sizeof(struct Node));
        nNode->data= k;
        nNode->next = NULL;
        temp = *head;
        while(temp->data != given){
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = nNode;
        nNode->next = temp2;
    }
}

void printLinkedList(struct Node **head){
    struct Node *temp = *head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main(){
    int arr[] = {10, 24, 29, 21, 20, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Node *head = NULL, *temp = NULL, *nNode;

    for(int i = 0; i < n; i++){
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

    insert_after_node(&head, 24,143);

    printLinkedList(&head);

    return 0;
}
