#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define VECTOR_INIT_CAPACITY 4

typedef struct vector{
	int* arr;
	int maxCapacity;
	int currentSize;
} vector;

void init(vector* v)
{
	v->maxCapacity = 4;
	v->currentSize = 0;
	v->arr = malloc(sizeof(int) * v->maxCapacity);

}

void insert(vector* v , int e)
{
	if(v->currentSize < v-> maxCapacity)
	{
		v->arr[v->currentSize] = e;
		v->currentSize++;
	}
	else
	{
		v->maxCapacity*=2;
		int *tempArr = malloc(sizeof(int) * v->maxCapacity);
		for(int i =0; i< v->currentSize; i++)
		{
			tempArr[i] = v->arr[i];
		}
		tempArr[v->currentSize] = e;
		v->currentSize++;
		free(v->arr);
		v->arr = tempArr;
	}
}

void delete(vector *v, int index)
{
	v->arr[index] = NULL;
	for(int i =index; i < v->currentSize; i++)
	{
			v->arr[i] = v->arr[i+1];
	}
	v->currentSize--;
}

void printElements(vector* v)
{
	for(int i = 0; i < v->currentSize; i++)
	{
		printf("i: %i \n" , v->arr[i]);
	}
}

int main(int argc, char ** argv)
{
	vector v1;
	init(&v1);
	insert(&v1 , 0);
	insert(&v1, 1);
	insert(&v1 , 2);
	insert(&v1, 3);
	insert(&v1 , 4);
	insert(&v1, 5);
	insert(&v1 , 6);
	insert(&v1, 7);
	insert(&v1, 8);
	delete(&v1, 2);
	printElements(&v1);
}

