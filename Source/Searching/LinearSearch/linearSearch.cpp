/*
    LINEAR SEARCH
    Date : May 14, 2025

*/

#include <iostream>
// #include <array>

int linearSearch(int array[], int size, int target);

// std::array<int, 9> rawData = {2, 3, 6, 4, 7, 8, 5, 1, 9};
int rawData[9] = {2, 3, 6, 4, 7, 8, 5, 1, 9};



int main() {
    std::cout << "LINEAR SEARCH by Reymo Je" << std::endl;

    std::cout << "Result : " << linearSearch(rawData, sizeof(rawData) / sizeof(rawData[0]), 9) << std::endl;

    return 0;
}


int linearSearch(int array[], int size, int target) {
    // for (int data : array) {
    //     if (data == target) {
    //         return data;
    //     }
    // }

    for (int i = 0; i <= size; i++) {
        if (array[i] == target) {
            return i;
        }
    }

    return NULL;
}