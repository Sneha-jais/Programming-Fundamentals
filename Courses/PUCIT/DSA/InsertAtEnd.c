#include<stdio.h>
#include<stdlib.h>


struct node
{
    int val;
    struct node* next;
};

typedef struct node nd;

struct node* head = NULL;

void create(int n){
    int x,i;
    printf("Enter the first value: ");
    scanf("%d", &x);
    head = (nd *)malloc(sizeof(nd));
    nd* current = head;
    head->val=x;
    head->next=NULL;
    printf("Enter the rest of the values: \n");
    for(i = 1; i<n; i++){
        nd* temp = (nd *)malloc(sizeof(nd));
        scanf("%d", &x);
        temp->val = x;
        temp->next = NULL;
        current->next = temp;
        current = temp;
    }
}
void display(){
    nd* p = head;
    printf("The linked list is: \n");
    while(p!=NULL){
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL \n");
}
void insertEnd(){
    int x;
    printf("Enter the vlaue to be inserted at the end; \n");
    scanf("%d", &x);
    nd* temp = (nd*)malloc(sizeof(nd));
    temp->val = x;
    temp->next=NULL;
    nd * last = head;
    while(last->next!=NULL){
        last = last->next;
    }
    last->next = temp;
}
int main(){
    int x;
    printf("Enter the no. of nodes of linked list: \n");
    scanf("%d", &x);
    create(x);
    display();
    insertEnd();
    display();
    return 0;
}
