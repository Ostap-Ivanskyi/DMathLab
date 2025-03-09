//
// Created by ostap on 03.03.2025.
//

#include "Menu.h"
#include <iostream>
#include "Sort.h"

void ThirdSubMenu(datatype arr[],int size,int mainChoice,int secondChoice) {
    int choice,start,end;
    std::cout << "1. Full sort\n";
    std::cout << "2. Partial sort\n";
    std::cin >> choice;
    if(choice == 1) {
        switch (mainChoice) {
            case 1:
                SortBubble(arr,size,secondChoice);
            break;
            case 2:
                SortInsertion(arr,size,secondChoice);
            break;
            case 3:
                SortSelection(arr,size,secondChoice);
            break;
        }
    }else if(choice == 2) {
        std::cout << "Arr: \n";
        show(arr,size);
        std::cout << "Size: \n"<<size<<"\n";
        std::cout << "Enter start and end index\n";
        std::cin >> start>>end;
        switch (mainChoice) {
            case 1:
                SortBubble(arr,size,secondChoice,start,end);
            break;
            case 2:
                SortInsertion(arr,size,secondChoice,start,end);
            break;
            case 3:
                SortSelection(arr,size,secondChoice,start,end);
            break;
        }
    }
}


void SecondMenu(datatype arr[],int size,int mainChoice) {
    int secondChoice;
    std::cout << "1. Straight sort\n";
    std::cout << "2. Reverse sort\n";
    std::cin >> secondChoice;
    ThirdSubMenu(arr,size,mainChoice,secondChoice-1);
}

void MainMenu(datatype arr[],int size) {

    int mainChoice;

    while (true) {
        std::cout << "Chose a sort method:\n";
        std::cout << "1. Bubble sort\n";
        std::cout << "2. Insertion sort\n";
        std::cout << "3. Selection sort\n";
        std::cout << "4. Exit\n";
        std::cin >> mainChoice;
        if (mainChoice == 4) {
            break;
        }
        SecondMenu(arr,size,mainChoice);

        std::cout << "Array has been sorted: ";
        show(arr, size);
        std::cout << "MinItem - "<<MinItem(arr,size)<<"\n";
        std::cout << "MaxItem - "<<MaxItem(arr,size)<<"\n";

    }
};
