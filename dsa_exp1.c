#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1,f=0;
int isEmpty(){
    if(top==-1){
        printf("stack underflow!");
        exit(0);
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(top==size-1){
        printf("stack overflow!");
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
        f++;
    }
}
void pop(){
    if(!isEmpty()){
        int i;
        printf("%d popped.",stack[top]);
        top--;
        printf("\n%d is topmost after popping!",stack[top]);
        stack[f-1]=0;
        f--;
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
        else if(c==3){
            exit(0);
        }
        else{
            printf("enter correct choice.");
        }
        display();
    }
    while(1);
    return 0;
}
/*
OUTPUT
enter 1 to push and 2 to pop.
enter choice:1
enter element to be pushed:1
1 pushed.
stack: 1 0 0 0 0
enter 1 to push and 2 to pop.
enter choice:1
enter element to be pushed:3
3 pushed.
stack: 1 3 0 0 0
enter 1 to push and 2 to pop.
enter choice:1
enter element to be pushed:5
5 pushed.
stack: 1 3 5 0 0
enter 1 to push and 2 to pop.
enter choice:1
enter element to be pushed:7
7 pushed.
stack: 1 3 5 7 0
enter 1 to push and 2 to pop.
enter choice:1
enter element to be pushed:9
9 pushed.
stack: 1 3 5 7 9
enter 1 to push and 2 to pop.
enter choice:1
stack overflow!
stack: 1 3 5 7 9
enter 1 to push and 2 to pop.
enter choice:2 
9 popped.
7 is topmost after popping!
stack: 1 3 5 7 0
enter 1 to push and 2 to pop.
enter choice:2
7 popped.
5 is topmost after popping!
stack: 1 3 5 0 0
enter 1 to push and 2 to pop.
enter choice:1
enter element to be pushed:3
3 pushed.
stack: 1 3 5 3 0
enter 1 to push and 2 to pop.
enter choice:2
3 popped.
5 is topmost after popping!
stack: 1 3 5 0 0
enter 1 to push and 2 to pop.
enter choice:2
5 popped.
3 is topmost after popping!
stack: 1 3 0 0 0
enter 1 to push and 2 to pop.
enter choice:2
3 popped.
1 is topmost after popping!
stack: 1 0 0 0 0
enter 1 to push and 2 to pop.
enter choice:2
1 popped.
0 is topmost after popping!
stack: 0 0 0 0 0
enter 1 to push and 2 to pop.
enter choice:2
stack underflow!
*/
