#pragma once

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(int X, Stack S);
int Top(Stack S);
void Pop(Stack S);

typedef struct Node {
	int Element;
	PtrToNode Next;
};