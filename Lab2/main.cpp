#include <iostream>
#include "Sort.h"
#include "Menu.h"

int main() {
    datatype arr[] = {5, 3, 8, 1,-10,1,9, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    MainMenu(arr,size);

    return 0;
}
