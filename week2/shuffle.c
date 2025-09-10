#include <stdio.h>
#include <stdlib.h>

void printarr(int* arr, int n);
void swap(int* arr, int i, int j);
void shufflearray(int* arr, int n);


int main()
{
    int S[26];

    for(int i = 0; i < 26; i++)
    {
        S[i] = i;
    }
    shufflearray(S,26);
    printarr(S, 26);
}

void printarr(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void shufflearray(int* arr, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand()%i;
        swap(arr,i,j);
    }
}