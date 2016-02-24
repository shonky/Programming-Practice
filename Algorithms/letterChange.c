#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int sizeOfArr(size_t totArrSize , size_t oneElementSize)
{
	return (totArrSize/oneElementSize);
}

void capitalizeVowels(char* str)
{
	char* s = NULL;
	if((s = (char*) malloc(sizeof(char) * strlen(str)+1)) == 0)
	{
		printf("unable to allocate memory \n");
	}
	strcpy(s, str);
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			s[i] = s[i] - 32; 
		}
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	free(s);
}



void letterChange(char *str3)
{
	//printf("StrLen: %i \n" ,strlen(str3));
	char* string = NULL;
	if ((string = (char*) malloc(sizeof(char) * strlen(str3)+1)) == 0)
	{
		printf("unable to allocate memory \n");
	}
	
	
	strcpy(string, str3);
	int i = 0;
	
	while(string[i] != '\0')
	{
		if((string[i] >= 65  && string[i] <= 90) || (string[i] >= 97  && string[i] <= 122))
		{
			if(string[i] == 90 || string[i] == 122){
				string[i] = 65;
			}
			else if(string[i] == 10 || string[i] == 32)
			{
				string[i] = string[i];
			}
			else{
				string[i] += 1;
			}
		}
		
		i++;
	}
	capitalizeVowels(string);
	free(string);
	
}

int main(int argc, char* argv[])
{
	//printf("herea");
	char* str1 = "fun times!";
	char* str2 = NULL;
	if((str2 = (char*) malloc(sizeof(char) * strlen(str1)+1)) == 0)
	{
		printf("unable to allocate memory \n");
	}
	strcpy(str2, str1);
	letterChange(str2);
	free(str2);
	return 0;
}