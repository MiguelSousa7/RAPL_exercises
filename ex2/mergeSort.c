#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Merge function for Merge Sort
void mergeInt(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSortInt(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortInt(arr, left, mid);
        mergeSortInt(arr, mid + 1, right);
        mergeInt(arr, left, mid, right);
    }
}

// Merge Sort for floats
/* void mergeFloat(float arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    float L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSortFloat(float arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortFloat(arr, left, mid);
        mergeSortFloat(arr, mid + 1, right);
        mergeFloat(arr, left, mid, right);
    }
}

// Merge Sort for strings
void mergeString(char *arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    char *L[n1], *R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (strcmp(L[i], R[j]) <= 0) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSortString(char *arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortString(arr, left, mid);
        mergeSortString(arr, mid + 1, right);
        mergeString(arr, left, mid, right);
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

    // Perform Merge Sort
    mergeSortInt(intArr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", intArr[i]);
    }
    printf("\n");

    return 0;
}