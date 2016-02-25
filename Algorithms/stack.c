#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define INITMAXSIZE 4
typedef struct stack{
	int* sta;
	int top;
	int maxSize;
} stack;

void resize(stack* s)
{
	s->maxSize *= 2;
	int* tempArray = malloc(sizeof(int) * s->maxSize);
	for(int i =0; i < s->top; i++)
	{
		tempArray[i] = s-> sta[i];
	}
	free(s->sta);
	s->sta = tempArray;
}

void init(stack* s)
{
	s-> maxSize = INITMAXSIZE;
	s->sta = malloc(sizeof(int) * s->maxSize);
	s->top = 0;
}

void push(stack* s, int e)
{
	if(s->top < s->maxSize)
	{
		s-> sta[s->top] = e;
		s->top++;
	}
	else
	{
		resize(&s);
	}
}

void pop(stack* s)
{
	s->sta[s->top-1] = NULL;
	s->top--;
}

void printStack(stack* s)
{
	for(int i = 0; i < s->top; i++)
	{
		printf("i: %i \n", s->sta[i]);
	}
}

int main(int argc, char** argv)
{
	stack s1;
	init(&s1);
	push(&s1,1);
	push(&s1,2);
	push(&s1,3);
	push(&s1,4);
	pop(&s1);
	pop(&s1);
	printStack(&s1);

}