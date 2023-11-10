#ifndef InsertionSort_H

#define InsertionSort_H
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void insertionSort(vector <int> &myVector, int len) {
    for (int i = 1 ; i < len ; i++) {
        int cursore = i;
        int value = myVector[i];

        {
            while (myVector[cursore - 1] > value) {
                swap(myVector[cursore],myVector[cursore-1]);

                --cursore;
            }
        }
        //myVector[cursore] = value;

    }

}

#endif