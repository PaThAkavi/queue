#include<stdio.h>
# define CAPACITY 5 
void insert();
void display();
void delete();

int queue[CAPACITY];
int rear = 0;
int front = 0;

int main(){
    insert();
    insert();
    insert();
    display();
    delete();
    display();
    delete();
    display();
    return 0;
}

void insert(){
    int ele;
    if(rear == CAPACITY){
        printf("Queue is full\n");
    }
    else{
        printf("Enter the element to be inserted : \n");
        scanf("%d", &ele);
        queue[rear] = ele;
        rear+=1;
    }
}

void delete(){
    if(front == rear){
        printf("Queue is empty\n");
    }
    else{
        for(int i = front; i<rear-1; i++){
            queue[i] = queue[i+1];
        }
        rear--;
    }
}

void display(){
    if(front == rear){
        printf("Queue is empty\n");
    }
    else{
        printf("The elements are : \n");
        for(int i = 0; i < rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}