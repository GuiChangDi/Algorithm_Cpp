#pragma once

struct QueueRecord;
typedef struct QueueRecord *Queue;

int IsEmpty(Queue Q);
int IsFull(Queue Q);
Queue CreateQueue(int num);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(int X, Queue Q);
int Front(Queue Q);
void Dequeue(Queue Q);
int FrontAndDequeue(Queue Q);
#define MinQueueSize (5)
#define MaxQueueSize 100

struct QueueRecord {
	int Capacity;
	int Front;
	int Rear;
	int Size;
	int *Array;
};