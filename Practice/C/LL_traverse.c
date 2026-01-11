#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traverse(struct Node* head){
    if(head == NULL) return;
    
    while(head != NULL){
        printf("%d\n",head->data);
        head = head->next;
    }
}

int main() {
	int arr[] = {10,20,30,40};
	int n = sizeof(arr) / sizeof(arr[0]);
	struct Node *head = NULL, *temp = NULL,*newNode;
	for(int i = 0;i<n;i++){
	    newNode = (struct Node*)malloc(sizeof(struct Node));
	    newNode->data = arr[i];
	    newNode->next = NULL;
	    
	    if(head == NULL){
	        head = newNode;
	        temp = head;
	    }
	    else{
	        temp->next = newNode;
	        temp = newNode;
	    }
	}
	traverse(head);
	return 0;
}

