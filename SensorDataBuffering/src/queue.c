#include "queue.h"
#include <stdio.h>

void initQueue(CircularQueue *q)
{
    q->front =  0;
    q->rear  = -1;
    q->count -  0; 
}


int isQueueFull(CircularQueue *q)
{
    return q->count == MAX_SIZE;
}

int isQueueEmpty(CircularQueue *q)
{
    return q->count == 0;
}

void enqueue(CircularQueue *q, SensorData data)
{
    
}