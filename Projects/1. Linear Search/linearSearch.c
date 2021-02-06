/******************************************************************************
 *  Name: Brailinson Disla
 *
 *  Compilation:  make linearSearch
 *  Execution:    ./linearSearch
 *
 *  Implements the linear search algorithm for a given array.
 *      - returns the index of the first occurrence
 *
 *  % ./linearSearch
 ******************************************************************************/
#include <stdio.h>

// prototype for the linearSearch function
int linearSearch(int *arr, int size, int n);

// entry point for program
int main(void) {
    // number to find
    int n = -1;

    while (n < 0) {
        // ask user for number to find
        printf("Find (1-10): ");

        // scan input n
        scanf("%d", &n);

        // clear buffer if not a number
        while (getchar() != '\n') {};
    }

    // size of the array
    const int size = 10;

    // hardcoded sorted array of integers
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // find index of the number n
        // index if in the array; -1 otherwise
    int indexOfN = linearSearch(arr, size, n);

    // check if the index is valid
    if (indexOfN != -1) {
        // print information
        printf("The number %i is at index: %i.\n", n, indexOfN);
    } else {
        // print error message
        printf("The number %i is not in the array.\n", n);
    }
}

// returns the index of the element whose value is n
int linearSearch(int *arr, int size, int n) {
    // iterate through the elements of the array
    for (int i =  0; i < size; i++) {
        // check if the current element is n
        if (arr[i] == n) {
            // return index
            return i;
        }
    }

    // return -1 if not found
    return -1;
}
