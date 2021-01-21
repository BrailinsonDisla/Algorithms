/******************************************************************************
 *  Name: Brailinson Disla
 *
 *  Compilation:  make linearSearch
 *  Execution:    ./linearSearch
 *
 *
 *
 *  % ./linearSearch
 ******************************************************************************/
#include <stdio.h>

// prototype for the linearSearch function
int linearSearch(int *arr, int n);

// entry point for program
int main(void) {
    // number to find
    int n = 100;

    // hardcoded sorted array of integers
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 10};

    // find index of the number n -- if in the array
    int indexOfN = linearSearch(arr, n);

    // check if the index is valid
    if (indexOfN != -1) {
        // print information
        printf("The number %i is at index: %i.\n", n, indexOfN);
    } else {
        // print error message
        printf("The number %i is not in the array.\n");
    }
}

// returns the index of the element whose value is n
int linearSearch(int *arr, int n) {
    // iterate through the elements of the array
    for (int i =  0; i < 10; i++) {
        // check if the current element is n
        if (arr[i] == n) {
            // return index
            return i;
        }
    }

    // return -1 if not found
    return -1;
}
