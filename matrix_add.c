#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>

int main(int size, int blocks)
{
    time_t start_time;
    start_time = time(NULL); // get current time
    int scalar;     // random number
    int block_size = size / blocks;

    for (int x = 1; x < blocks; x++)
    {
        for (int y = 1; y < blocks; y++)
        {
            // async read request matrix[x, y] 
            // block = async read return matrix[x, y] 
            // matrix_add(block, block_size, scaler)
            // async write request block
            // async write return block
        }
    }

    time_t end_time;
    end_time = time(NULL);
    time_t time_diff = end_time - start_time;
    printf("%ld\n", time_diff)
}

void matrix_add(int block[][], int size, int scalar)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; i < size; j++)
        {
            block[i][j] += scalar;
        }
    }
}



void printCurrentTime() {
    time_t currentTime;
    currentTime = time(NULL);
    printf("%ld\n", currentTime);
}