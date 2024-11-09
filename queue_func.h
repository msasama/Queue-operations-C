#ifndef QUEUE_FUNC_H
#define QUEUE_FUNC_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Queue {
    int items[MAX];  
    float fItems[MAX];
    char cItems[MAX];
    int front,rear;
    int cfront,crear;
    int ffront,frear;
} Queue;

Queue q;

void initQueue() {
   q.front=q.rear=0;
   q.cfront=q.crear=0;
   q.ffront=q.frear=0;
}

int isFullI(){
    return q.rear==MAX;
}
int isFullF() {
    return q.frear == MAX;
}

int isFullC() {
    return q.crear == MAX;
}

int isEmptyI() {
    return q.rear==q.front;
}

int isEmptyF() {
    return q.frear==q.ffront;
}

int isEmptyC() {
    return q.crear==q.cfront;
}

void pushI(int value) {
    if (isFullI()) {
        printf("Queue overflow: Cannot push %d, int queue is full\n", value);
        return;  
    }
    q.items[q.rear++] = value;  
}

void pushF(float value) {
    if (isFullF()) {
        printf("Queue overflow: Cannot push %.2f, float queue is full\n", value);
        return;  
    }
    q.fItems[q.frear++] = value;  
}

void pushC(char value) {
    if (isFullC()) {
        printf("Queue overflow: Cannot push '%c', char queue is full\n", value);
        return;  
    }
    q.cItems[q.crear++] = value;  
}

int popI() {
    if (isEmptyI()) {
        printf("Queue underflow: Cannot pop, int queue is empty\n");
        return -1;  
    }
    int num=q.items[q.front];
    q.items[q.front++]=-1;
    if(q.front==q.rear){
        q.front=q.rear=0;
    }
    return num;
}

float popF() {
  if (isEmptyF()) {
        printf("Queue underflow: Cannot pop, float queue is empty\n");
        return -1;  
    }
    float num=q.fItems[q.ffront];
    q.fItems[q.ffront++]=-1;
    if(q.ffront==q.frear){
        q.ffront=q.frear=0;
    }
    return num;
}

char popC() {
   if (isEmptyC()) {
        printf("Queue underflow: Cannot pop, char queue is empty\n");
        return -1;  
    }
    char num=q.cItems[q.cfront];
    q.cItems[q.cfront++]=-1;
    if(q.cfront==q.crear){
        q.cfront=q.crear=0;
    }
    return num;
}

void printQueueI() {
    if (isEmptyI()) {
        printf("Int queue is empty\n");
        return;
    }
    for (int i = q.front; i < q.rear; i++) {
        printf("%d ", q.items[i]);
    }
    printf("\n");
}

void printQueueF() {
    if (isEmptyF()) {
        printf("Float queue is empty\n");
        return;
    }
    for (int i = q.ffront; i < q.frear; i++) {
        printf("%f ", q.fItems[i]);
    }
    printf("\n");
}

void printQueueC() {
    if (isEmptyC()) {
        printf("Char queue is empty\n");
        return;
    }
    for (int i = q.cfront; i < q.crear; i++) {
        printf("%c ", q.cItems[i]);
    }
    printf("\n");
}

void clearQueue() {
    q.front=q.rear=0;
    q.ffront=q.frear=0;
    q.cfront=q.crear=0;
    printf("All stacks cleared\n");
}
#endif