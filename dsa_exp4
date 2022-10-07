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
int isEmpty(struct node *top){
    if(top==NULL){
   	 printf("stack underflow.\n");
   	 return 1;
    }
    else{
   	 return 0;
    }
}
struct node *push(struct node *top,int ele){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->val=ele;
    p->next=top;
    return p;
}
struct node *pop(struct node *top){
    if(!isEmpty(top)){
   	 top=top->next;
   	 return top;
    }
}
struct node* peek(struct node *top){
    struct node *p=top;
    return p;
}
int main(){
    struct node *top=NULL;
    printf("1.push\n2.pop\n3.peek\n4.exit");
    int n,c;
    do{
   	 printf("\nenter choice:");
   	 scanf("%d",&c);
   	 if(c==1){
   		 printf("enter element to be pushed.");
   		 scanf("%d",&n);
   		 printf("stack after pushing:");
   		 top=push(top,n);
   		 printlinkedlist(top);
   	 }
   	 else if(c==2){
   		 printf("stack after popping:");
   		 top=pop(top);
   		 printlinkedlist(top);
   	 }
   	 else if(c==3){
   		 top=peek(top);
   		 printf("top = %d",top->val);
   	 }
   	 else if(c==4){
   		 printf("executed.");
   		 exit(0);
   	 }
   	 else{
   		 printf("enter valid choice.");
   	 }
    }while(1);
    return 0;
}


OUTPUT :

1.push
2.pop
3.peek
4.exit
enter choice:1
enter element to be pushed.2
stack after pushing:2
enter choice:1
enter element to be pushed.4
stack after pushing:4 2
enter choice:1
enter element to be pushed.5
stack after pushing:5 4 2
enter choice:2
stack after popping:4 2
enter choice:1
enter element to be pushed.6
stack after pushing:6 4 2
enter choice:3
top = 6
enter choice:4
executed.
--------------------------------
