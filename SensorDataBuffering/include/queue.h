#ifndef QUEUE_H
#define QUEUE_H


#include <time.h>

#define MAX_SIZE 60

typedef struct 
{
    float temp;
    time_t timestamp;
} SensorData;

typedef struct
{
    SensorData buffer[MAX_SIZE];
    int front;
    int rear;
    int count;
} CircularQueue;




#endif