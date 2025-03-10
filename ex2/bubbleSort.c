#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Bubble Sort for integers (O(n^2))
void bubbleSortInt(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Bubble Sort for floats
/*void bubbleSortFloat(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Bubble Sort for strings
void bubbleSortString(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Utility function to print an integer array
void printIntArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Utility function to print a float array
void printFloatArray(float arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%.2f ", arr[i]);
    printf("\n");
}

// Utility function to print a string array
void printStringArray(char *arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%s ", arr[i]);
    printf("\n");
}
*/

int main(int argc, char *argv[]) {
    // Check if any arguments were passed
    if (argc <= 1) {
        printf("No array passed. Exiting...\n");
        return 1; // Exit if no array is passed
    }

    // Declare the array based on the number of arguments passed
    int n = argc - 1; // Array size is the number of arguments minus the program name
    int intArr[n];

    // Convert arguments to integers and store in the array
    for (int i = 0; i < n; i++) {
        intArr[i] = atoi(argv[i + 1]);
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", intArr[i]);
    }
    printf("\n");

    // Perform Bubble Sort
    bubbleSortInt(intArr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", intArr[i]);
    }
    printf("\n");

    return 0;
}