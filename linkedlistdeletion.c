#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};
void printlinkedlist(struct node *p){
    while(p!=NULL){
        printf("%d ",p->val);
        p=p->next;
    }
};
struct node *deleteFirst(struct node *p){
    struct node *ptr=p;
    ptr=ptr->next;
    return ptr;
};
struct node*deleteInBtw(struct node *head,int index){
    struct node*h=head;
    int i=0;
    while(i!=index-1){
        h=h->next;
        i++;
    }
    struct node *q=h->next;
    h->next=q->next;
    free(q);
    return head;
};
struct node *deleteEnd(struct node *head){
    struct node *h=head;
    struct node *q=h->next;
    while(q->next!=NULL){
        h=h->next;
        q=q->next;
    }
    h->next=NULL;
    free(q);
    return head;
}
struct node *deleteEle(struct node *head,int ele){
    struct node *p=head;
    struct node *q=p->next;
    while(q->val!=ele && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->val==ele){
        p->next=q->next;
        free(q);
    }
    return head;
}
int main(){
    struct node* head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    head->next=second;
    second->next=third;
    third->next=NULL;
    head->val=12;
    second->val=34;
    third->val=42;
    printlinkedlist(head);
    head=deleteEle(head,34);
    printf("\n");
    printlinkedlist(head);
}