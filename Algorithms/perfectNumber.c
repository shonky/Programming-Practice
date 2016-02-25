#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//28: Factors: 1,2,4,7,14
int isPerfect(int perNumber)
{
	int perSum = 0;
	for(int i = 1; i <= perNumber/2; i++)
	{
		if(perNumber % i == 0)
		{
			perSum+=i;
		}
	}

	if(perSum == perNumber)
	{
		printf("This number is a perfect number \n");
		return 1;
	}
	else
	{
		printf("This number is not a perfect number \n");
		return 0;
	}
}


int main(int argc, char** argv)
{
	printf("Please enter the testing integer \n");
	int pNumber;
	scanf("%d", &pNumber);
	isPerfect(pNumber);
}