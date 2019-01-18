#include "ADP.h"
#include "Function_Protocol.h"
#include <iostream>

struct Node
{
	int Element;
	Position Next;
};

int
BinarySearch(const int A[],int X,int N)
{
    int low,mid,high;
    low = 0,high = N-1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(mid == X)
            return True;
        else if(A[mid] <= X)
            low = mid + 1;
        else if(A[mid] > X)
            high = mid-1;
    }
    return False;
}

uint
Gcd(uint M, uint N)
{
	uint Rem;

	while (N > 0)
	{
		Rem = M % N;
		M = N;
		N = Rem;
	}
	return M;
}

int 
IsEmpty(List L)
{
	return L->Next == NULL;
}

int
IsLast(Position P, List L)
{
	return P->Next == NULL;
}

Position
Find(int X, List L)
{
	Position P;
	P = L->Next;
	while (P != NULL && P->Element != X)
		P = P->Next;
	return P;
}

Position
FindPrevious(int X, List L)
{
	Position P;
	P = L->Next;
	while (P->Next != NULL && P->Next->Element != X)
		P = P->Next;
	return P;
}

void Delete(int X, List L)
{
	Position P,TmpCell;

	P = FindPrevious(X, L);

	if (!IsLast(P, L))
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
}

void
Insert(int X, List L, Position P)
{
	Position TmpCell;
	TmpCell = (Position)malloc(sizeof(struct Node));
	if (TmpCell == NULL)
		printf("Out of Memory!");
	
	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}