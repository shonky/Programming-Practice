#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct{
	char* name;
	float scores[2];
	double improvement;
} Student;

void sortAndPrint(Student s)
{

}

void calculateImprovement(Student s)
{
	if(s.scores[1] > s.scores[0])
	{
		s.improvement = ((s.scores[1] - s.scores[0])/s.scores[0])*100;
		printf("The student %s has improved by %f \n", s.name, s.improvement);
	}
	else
	{
		s.improvement = -1;
		printf("The student %s has improved by %f \n", s.name, s.improvement);
	}
}

int main(int argc, char** argv)
{
	
	Student s3 = {"Bob" , 25, 50, 0};
	Student s2 = {"Travis" , 49, 50, 0};
	Student s1 = {"Shashank" , 50, 25, 0};
	Student s[3] = {s1, s2, s3};

	for(int i =0; i<3; i++)
	{
		calculateImprovement(s[i]);
	}

	sortAndPrint(s);	
}