//
// Created by ostap on 03.03.2025.
//

#include "Sort.h"
#include <iostream>
#include <chrono>

void swap(datatype& a, datatype& b) {
    datatype temp = a;
    a = b;
    b = temp;
}

void show(const datatype arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int MinItem(const datatype arr[], int size, int start, int end) {
    if (end == -1) end = size - 1;
    int minIndex = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int MaxItem(const datatype arr[], int size, int start, int end) {
    if (end == -1) end = size - 1;
    int maxIndex = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void SortBubble(datatype arr[], int size, int reverse, int start, int end) {
    auto startTime = std::chrono::high_resolution_clock::now();
    int counter = 0;
    if (end == -1) end = size - 1;
    for (int i = end; i > start; i--) {
        for (int j = start; j < i; j++) {
            counter++;
            if (reverse==0) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
            else if (reverse==1) {
                if (arr[j] < arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    auto endTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime);
    std::cout << "Time: " << duration.count() << " ns" << std::endl;
    std::cout << "Iterations: "<<counter << std::endl;
}

void SortInsertion(datatype arr[], int size,int reverse, int start, int end) {
    auto startTime = std::chrono::high_resolution_clock::now();
    int counter = 0;
    if (end == -1) end = size - 1;
    for (int i = start + 1; i <= end; i++) {
        datatype key = arr[i];
        int j = i - 1;
        if (reverse==0) {
            while (j >= start && arr[j] > key) {
                counter++;
                arr[j + 1] = arr[j];
                j--;
            }
        }
        else if (reverse==1) {
            while (j >= start && arr[j] < key) {
                counter++;
                arr[j + 1] = arr[j];
                j--;
            }
        }
        arr[j + 1] = key;
    }
    auto endTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime);
    std::cout << "Time: " << duration.count() << " ns" << std::endl;
    std::cout << "Iterations: "<<counter << std::endl;
}

void SortSelection(datatype arr[], int size,int reverse, int start, int end) {
    auto startTime = std::chrono::high_resolution_clock::now();
    int counter = 0;
    if (end == -1) end = size - 1;
    if (reverse==0) {
        for (int i = start; i < end; i++) {
            counter++;
            int minIndex = MinItem(arr, size, i, end);
            swap(arr[i], arr[minIndex]);
        }
    }else if (reverse==1) {
        for (int i = start; i < end; i++) {
            counter++;
            int maxIndex = MaxItem(arr, size, i, end);
            swap(arr[i], arr[maxIndex]);
        }
    }
    auto endTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime);
    std::cout << "Time: " << duration.count() << " ns" << std::endl;
    std::cout << "Iterations: "<<counter << std::endl;
}
