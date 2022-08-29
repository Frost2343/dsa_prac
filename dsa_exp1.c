#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top;
top=-1;
int isEmpty(){
    if(top==-1){
        printf("stack is empty.");
        exit(0);
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(top==size-1){
        printf("stack is full.");
        return 1;
    }
    else{
        return 0;
    }
}
void push(int n){
    if(!isFull()){
        top++;
        printf("enter element to be pushed:");
        scanf("%d",&n);
        stack[top]=n;
        printf("%d pushed.",n);
    }
}
void pop(){
    if(!isEmpty()){
        printf("%d popped.",stack[top]);
        top--;
        printf("\n%d is topmost after popping!",stack[top]);
    }
}
void display(){
    int i;
    printf("\nstack:");
    for(i=0;i<size;i++){
        printf(" %d",stack[i]);
    }
}
int main(){
    int i,n,c;
    do{
        printf("\nenter 1 to push and 2 to pop.");
        printf("\nenter choice:");
        scanf("%d",&c);
        if(c==1){
            push(n);
        }
        else if(c==2){
            pop();
        }
        else{
            printf("enter correct choice.");
        }
        display();
    }
    while(1);
    return 0;
}
