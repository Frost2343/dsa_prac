#include<stdio.h>
#include<stdlib.h>
#define size 5
int Q[size];
int f=0,r=0,a=0;
int isFull(){
	if(size==r){
		printf("queue overflow!");
		return 1;
	}
	else{
		return 0;
	}
}
int isEmpty(){
	if(f==r){
		printf("queue underflow!");
		exit(0);
		return 1;
	}
	else{
		return 0;
	}
}
void enqueue(int n){
	if(!isFull()){
		printf("enter element:");
		scanf("%d",&n);
		Q[r]=n;
		printf("\n%d enqueued.",Q[r]);
		r=r+1;
        a++;
	}
}
void dequeue(){
	if(!isEmpty()){
		int i;
		printf("%d dequeued.",Q[f]);
		for(i=0;i<size;i++){
		Q[i]=Q[i+1];
		}
		printf("\n%d is frontmost.",Q[f]);
        Q[i]=Q[i+1];
        r--;
	}
}
void display(){
	int i,n;
	printf("\nqueue:");
	for(i=0;i<size;i++){
		printf(" %d",Q[i]);
	}
}
int main(){
	int n,c;
	do{
		printf("\nenter 1 to enqueue & 2 to dequeue:");
		printf("\nenter choice:");
		scanf("%d",&c);
		if(c==1){
			enqueue(n);
		}
		else if(c==2){
			dequeue();
		}
		else if(c==3){
			exit(0);
		}
		else{
			printf("enter valid choice!");
		}
		display();
	}while(1);
    return 0;
}
/*
OUTPUT

enter 1 to enqueue & 2 to dequeue:
enter choice:1
enter element:1

1 enqueued.
queue: 1 0 0 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:1
enter element:2

2 enqueued.
queue: 1 2 0 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:1
enter element:3

3 enqueued.
queue: 1 2 3 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:1
enter element:4

4 enqueued.
queue: 1 2 3 4 0
enter 1 to enqueue & 2 to dequeue:
enter choice:1
enter element:5

5 enqueued.
queue: 1 2 3 4 5
enter 1 to enqueue & 2 to dequeue:
enter choice:1
queue overflow!
queue: 1 2 3 4 5
enter 1 to enqueue & 2 to dequeue:
enter choice:2
1 dequeued.
2 is frontmost.
queue: 2 3 4 5 0
enter 1 to enqueue & 2 to dequeue:
enter choice:2
2 dequeued.
3 is frontmost.
queue: 3 4 5 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:1
enter element:7

7 enqueued.
queue: 3 4 5 7 0
enter 1 to enqueue & 2 to dequeue:
enter choice:2
3 dequeued.
4 is frontmost.
queue: 4 5 7 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:2
4 dequeued.
5 is frontmost.
queue: 5 7 0 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:2
5 dequeued.
7 is frontmost.
queue: 7 0 0 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:2
7 dequeued.
0 is frontmost.
queue: 0 0 0 0 0
enter 1 to enqueue & 2 to dequeue:
enter choice:2
queue underflow!

*/
