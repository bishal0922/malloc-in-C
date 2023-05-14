#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    printf("Test 4: \n");
    clock_t start_t, end_t;
    double total_t;

    start_t = clock();

    char *ptr = (char *)malloc(1000);
    char *ptr1 = (char *)malloc(2000);
    char *ptr2 = (char *)malloc(3000);
    char *ptr3 = (char *)malloc(4000);

    free(ptr1);
    free(ptr2);
    free(ptr3);
    free(ptr);

    end_t = clock();

    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", total_t);

    return 0;
}
