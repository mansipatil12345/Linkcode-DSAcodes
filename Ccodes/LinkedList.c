//Linked List stores data and add
//1.single -> unidirectional in nature
//2.Double -> 
//3.Circular

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *add;
};

struct Node *head=NULL;
void inserttoBegin(int val){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->add = head;
    head = newNode;
}

void display(){
    struct Node *temp = head;
    if(head==NULL){
        printf("\nList is empty");
        return;
    }
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->add;
    }
    printf("NULL");
}

void deleteFromBegin(){
    struct Node *temp = head;
    if(head==NULL){
        printf("\nList is empty");
        return;
    }
    head = temp->add;
    free(temp);
}

void insertFromEnd(int val){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->add = NULL;

    if(head==NULL){
        head=newNode;
    }else{
        struct Node *temp = head;
        while(temp->add!=NULL){
            temp = temp->add;
        }
        temp->add = newNode;
    }   
}

void deleteFromEnd(){
    struct Node *temp = head;
    struct Node *prev=NULL;
    while(temp->add!=NULL){
        *prev = temp;
        temp=temp->add;
    }
    free(temp);
}


int search(int key){
    int pos=1;
    struct Node *temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return pos;

        }
        temp=temp->add;
        pos++;
    }
    return 0;
}


int main(){
    insertFromEnd(10);
    insertFromEnd(20);
    insertFromEnd(30);
    insertFromEnd(40);
    // display();
    
    deleteFromEnd();
    display();

    int key;
    printf("\nEnter the value to search: ");
    scanf("%d",&key);
    int result = search(key);
    if(result==0){
        printf("Key found at %d",result);
    }else{
        printf("Key not found");
    }
    // inserttoBegin(40);
    // inserttoBegin(30);
    // inserttoBegin(20);
    // inserttoBegin(10);
    // display();
}