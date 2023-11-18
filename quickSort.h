#ifndef quickSort_H

#define quickSort_H

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void quickSort(vector<int>& myVector, int itemLeft, int pivot) {

    if (itemLeft < pivot) {
        //partition
        int lower = itemLeft;

        int higher = pivot;

        for (int i = lower; i < higher; i++) {
            if (myVector[i] <= myVector[pivot]){
                swap(myVector[lower], myVector[i]);
                lower++;
            }
        }
        swap(myVector[lower], myVector[pivot]);


        quickSort(myVector, itemLeft, lower - 1);
        quickSort(myVector, lower + 1, pivot);
    }
}
#endif

