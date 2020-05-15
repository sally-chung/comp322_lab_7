#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/resource.h>
#include <syslog.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
int main()
{

    int k, l;

    printf("\nEnter the first dimension of the array: ");
    scanf("%d", &k);
    printf("Enter the second dimension of the array: ");
    scanf("%d", &l);

    /* 2D array declaration*/
    int matrix1[k][l];
    /*Counter variables for the loop*/

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            matrix1[i][j] = rand() % 100;
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;

}