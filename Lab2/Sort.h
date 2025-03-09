//
// Created by ostap on 03.03.2025.
//

#ifndef SORT_H
#define SORT_H
typedef int datatype;

void swap(datatype& a, datatype& b);
void show(const datatype arr[], int size);
int MinItem(const datatype arr[], int size, int start = 0, int end = -1);
int MaxItem(const datatype arr[], int size, int start = 0, int end = -1);
void SortBubble(datatype arr[], int size,int reverse = 0, int start = 0, int end = -1);
void SortInsertion(datatype arr[], int size,int reverse = 0, int start = 0, int end = -1);
void SortSelection(datatype arr[], int size,int reverse = 0, int start = 0, int end = -1);

#endif //SORT_H
