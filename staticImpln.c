#include<stdio.h>
# define CAPACITY 5 
void insert();
void display();

int queue[CAPACITY];
int rear = 0;
int front = 0;

int main(){
    insert();
    insert();
    insert();
    display();
    return 0;
}

void insert(){
    int ele;
    if(rear == CAPACITY - 1){
        printf("Queue is full\n");
    }
    else{
        printf("Enter the element to be inserted : \n");
        scanf("%d", &ele);
        rear+=1;
        queue[rear] = ele;
    }
}

void display(){
    if(front == 0 && rear == 0){
        printf("Queue is empty\n");
    }
    else{
        while(rear != CAPACITY-1){
            printf("%d ", queue[rear]);
            rear += 1;
        }
        printf("\n");
    }
}