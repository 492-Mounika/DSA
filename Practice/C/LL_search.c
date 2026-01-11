#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* next;
};

bool LL_search(struct Node* head, int k){
    while(head != NULL){
        if(head->data == k) return true;
        else{
            head = head->next;
        }
    }
    return false;
}

int main(){
    int arr[] = {29,24,10,20,21};
    int k = 19;
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Node *head = NULL, *temp = NULL, *newNode;
    for(int i = 0;i<n;i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        
        if(head == NULL){
            head = newNode;
            temp = head;
        }else{
            temp->next = newNode;
            temp = newNode;
        }
    }
    bool res;
    res = LL_search(head,k);
    printf("%d",res);
}
