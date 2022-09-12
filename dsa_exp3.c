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
struct node *deleteFirst(struct node *head){
    if(head!=NULL){
        struct node *ptr=head;
        ptr=ptr->next;
        return ptr;
    }
    else{
        printf("cannot be performed.\n");
        return head;
    }
};
struct node *deleteEnd(struct node *head){
    if(head!=NULL){
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
    else{
        printf("cannot be performed.\n");
        return head;
    }
}
struct node *deleteEle(struct node *head,int ele){
    if(head!=NULL){
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
    else{
        printf("cannot be performed.\n");
        return head;
    }
}
int main(){
    struct node *head=NULL;
    int n,i,c;
    do{
        printf("\nenter:\n1 to insert at first.\n2 to insert in btw.\n3 to insert at end. \n4 to delete First.\n5 to delete End.\n6 to delete ele.");
        printf("\nenter choice:");
        scanf("%d",&c);
        if(c==1){
            printf("enter element:");
            scanf("%d",&n);
            printf("linked list after insertion at first: ");
            head=insertatfirst(head,n);
            printlinkedlist(head);
        }
        else if(c==2){
            printf("enter element:");
            scanf("%d",&n);
            printf("enter index:");
            scanf("%d",&i);
            printf("linked list after insertion in btw: ");
            head=insertinbtw(head,n,i);
            printlinkedlist(head);
        }
        else if(c==3){
            printf("enter element:");
            scanf("%d",&n);
            printf("linked list after insertion at end: ");
            head=insertatend(head,n);
            printlinkedlist(head);
        }
        else if(c==4){
            head=deleteFirst(head);
            printf("linked list after deletion at first: ");
            printlinkedlist(head);
        }
        else if(c==5){
            head=deleteEnd(head);
            printf("linked list after deletion at end: ");
            printlinkedlist(head);
        }
        else if(c==6){
            printf("enter element to be deleted: ");
            scanf("%d",&n);
            head=deleteEle(head,n);
            printf("linked list after deletion of %d: ",n);
            printlinkedlist(head);
        }
        else{
            printf("execution completed.");
            exit(0);
        }
    }while(1);
    return 0;    
}
/*
OUTPUT:
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:1
enter element:3
linked list after insertion at first: 3 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:1
enter element:1
linked list after insertion at first: 1 3 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:3
enter element:5
linked list after insertion at end: 1 3 5 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:3
enter element:8
linked list after insertion at end: 1 3 5 8 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:2
enter element:4
enter index:2
linked list after insertion in btw: 1 3 4 5 8 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:4
linked list after deletion at first: 3 4 5 8 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:5
linked list after deletion at end: 3 4 5 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:6
enter element to be deleted: 4
linked list after deletion of 4: 3 5 
enter:
1 to insert at first.
2 to insert in btw.
3 to insert at end. 
4 to delete First.
5 to delete End.
6 to delete ele.
enter choice:7
execution completed.
*/