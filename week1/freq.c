#include <stdio.h>
#include <stdlib.h>

int main(){
    /*create array and file pointers*/
    int *A;
    FILE *ptr; 
    FILE *fp;
    
    A = (int*)malloc(27*sizeof(int));
    if (A == NULL){
        printf("memort not allocated.\n");
        return 1;
    }

    ptr = fopen("abc.txt","r");
    if (ptr == NULL)
    {
        return 1;
    }
    int c;
    int v;

    while ((c = fgetc(ptr)) != EOF)
    {
        v = c - 'a';
        if (v >= 0 && v < 26)
        {
            A[v] += 1;
        }
        else
        {
            A[26] += 1;
        }

    }

    fp = fopen("output.txt","w");
    for (int i = 0; i < 27; i++)
    {
        fprintf(fp,"%d\n", A[i]);
    }

    fclose(ptr);
    fclose(fp);

    free(A);
    return 0;
}
