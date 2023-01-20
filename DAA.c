#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int *array, int start, int end, FILE *fp) {
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            fprintf(fp, "%d ", array[i]);
        }
        fprintf(fp, "\n");
    } else {
        for (int i = start; i <= end; i++) {
            swap((array + start), (array + i));
            permute(array, start + 1, end, fp);
            swap((array + start), (array + i));
        }
    }
}

// Randomized partition
int partition(int *arr, int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    int pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[high]);
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Randomized quicksort
void quicksort(int *arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main() {
    int array[] = {1, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);

    // Generate permutations and save them to a file
    FILE *fp;
    fp = fopen("permutations.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    permute(array, 0, n - 1, fp);
    fclose(fp);

    // Open the file in read mode and read permutations into an array
    fp = fopen("permutations.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Count the number of permutations
    int count = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    rewind(fp);

    int arr[count][3];
    int i = 0;
    while (fscanf(fp, "%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]) != EOF) {
        i++;
    }