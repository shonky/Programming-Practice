#include <stdio.h>


int sizeOfArr(size_t totArrSize , size_t oneElementSize)
{
	return (totArrSize/oneElementSize);
}

int* mergeSort(int* arra, int b, int e)
{
	if(b < e)
	{
		int q = (b+e)/2;
		Merge(arra, b, q);
		Merge(arra, q+1, e);
		Merge(arr, b, q, e);
	}
}

int main(int argc, char** argv)
{
	int arr[] = {5,4,3,2,1};
	int arrSize = sizeOfArr(sizeof(arr), sizeof(arr[0]));
	int* sortArr = mergeSort(arr, 0 , arrSize-1) 

	for(int i = 0; i< arrSize; i++)
	{
		printf("%i \n", i);
	}
}