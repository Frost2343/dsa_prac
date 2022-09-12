#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node*next;
};
void printlinkedlist(struct node*p){
    while(p!=NULL){
        printf("%d ",p->val);
        p=p->next;
    }
}
struct node*insertatfirst(struct node*head,int ele){
    struct node*h=(struct node*)malloc(sizeof(struct node));
    h->next=head;
    h->val=ele;
    return h;
};
struct node *insertinbtw(struct node*head,int ele,int index){
    struct node*h=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    h->next=p->next;
    p->next=h;
    h->val=ele;
    return head;
};
struct node*insertatend(struct node*head,int ele){
    struct node *h = (struct node *)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    h->next=NULL;
    p->next=h;
    h->val=ele;
    return head;
};
struct node *insertafternode(struct node*head,struct node *prevnode,int ele){
    struct node *h = (struct node*)malloc(sizeof(struct node));
    h->val=ele;
    h->next=prevnode->next;
    prevnode->next=h;
    return head;
};
int main(){
    struct node *head;
    struct node*two;
    struct node*three;
    struct node*four;
    head=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));
    head->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;
    head->val=34;
    two->val=55;
    three->val=90;
    four->val=88;
    printf("linkedlist before insertion:");
    printlinkedlist(head);
    printf("\nlinkedlist after insertion.");
    head=insertafternode(head,two,98);
    printlinkedlist(head);
    return 0;
}