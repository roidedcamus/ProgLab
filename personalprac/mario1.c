#include <stdio.h>

int main(){

    int n;
    printf("Height: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n - i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}