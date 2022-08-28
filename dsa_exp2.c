#include<stdio.h>
#include<stdlib.h>
#define size 5
int Q[5];
int f=0,r=-1;
int isFull(){
    if(r==size-1){
        printf("queue is full.");
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(r<f){
        printf("queue is empty.");
        exit(0);
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int n){
    if(!isFull()){
        printf("enter element to be enqueued:");
        scanf("%d",&n);
        r++;
        Q[r]=n;
        printf("%d equeued.",Q[r]);
    }
}
void dequeue(){
    if(!isEmpty()){
        printf("%d dequeued.",Q[f]);
        f++;
        printf("\n%d is frontmost.",Q[f]);
    }
}
void display(){
    int i;
    printf("\nqueue:");
    for(i=0;i<size;i++){
        printf(" %d",Q[i]);
    }
}
int main(){
    int n,i,c;
    do{
        printf("\nenter 1 to enqueue and 2 to dequeue:");
        scanf("%d",&c);
        if(c==1){
            enqueue(n);
        }
        else if(c==2){
            dequeue();
        }
        else{
            printf("wrong choice.");
        }
      //  display();
    }while(1);
    return 0;
}