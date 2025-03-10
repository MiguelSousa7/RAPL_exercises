#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Counting Sort for integers (O(n + k), where k is the range of the input)
void countingSortInt(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];

    // Find the max and min elements in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // Create a count array with range from min to max
    int range = max - min + 1;
    int *count = (int *)calloc(range, sizeof(int));

    // Store the frequency of each element in the count array
    for (int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }

    // Rebuild the sorted array
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]--) {
            arr[index++] = i + min;
        }
    }

    free(count);
}

// Counting Sort for floats (approximating to integers by scaling the decimal part)
/*void countingSortFloat(float arr[], int n) {
    // Scale factor to handle decimal precision
    int scaleFactor = 100;
    int *scaledArr = (int *)malloc(n * sizeof(int));

    // Convert float to integer by scaling
    for (int i = 0; i < n; i++) {
        scaledArr[i] = (int)(arr[i] * scaleFactor);
    }

    // Perform counting sort on the scaled integers
    countingSortInt(scaledArr, n);

    // Convert back to float
    for (int i = 0; i < n; i++) {
        arr[i] = (float)scaledArr[i] / scaleFactor;
    }

    free(scaledArr);
}

// Counting Sort for strings (based on string length)
void countingSortString(char *arr[], int n) {
    int maxLen = 0;

    // Find the maximum length of strings
    for (int i = 0; i < n; i++) {
        if (strlen(arr[i]) > maxLen) maxLen = strlen(arr[i]);
    }

    // Create a count array to store frequency of string lengths
    int *count = (int *)calloc(maxLen + 1, sizeof(int));

    // Count the frequencies of string lengths
    for (int i = 0; i < n; i++) {
            count[strlen(arr[i])]++;
    }

    // Rebuild the array based on the sorted lengths
    int index = 0;
    for (int len = 0; len <= maxLen; len++) {
        while (count[len]--) {
            for (int i = 0; i < n; i++) {
                if (strlen(arr[i]) == len) {
                    arr[index++] = arr[i];
                    break;
                }
            }
        }
    }

    free(count);
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
    countingSortInt(intArr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", intArr[i]);
    }
    printf("\n");
    
    return 0;
}