#ifndef hybridSort_H

#define hybridSort_H
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int partition(vector<int>& myVector, int itemLeft, int pivot) {
    int lower = itemLeft;
    int higher = pivot;

    for (int i = lower; i < higher; i++) {
        if (myVector[i] <= myVector[pivot]) {
            swap(myVector[lower], myVector[i]);
            lower++;
        }
    }

    swap(myVector[lower], myVector[pivot]);

    return lower;
}
void insertion(vector<int>& xs, int leftValue, int limit) {

    for (int i = leftValue+1; i < limit; i++) {
        int val = xs[i];
        int cur = i;

        while (cur > 0 && xs[cur-1] > val) {
            xs[cur] = xs[cur-1];
            cur--;
        }

        xs[cur] = val;
    }
}

void hybridSort(vector<int>& myVector, int itemLeft, int pivot) {
    const int threshold = 60;

    while (itemLeft < pivot && (pivot - itemLeft) > threshold) {
        int lower = partition(myVector, itemLeft, pivot);

        if ((lower - itemLeft) < threshold)
            insertion(myVector, itemLeft, lower);
        else
            hybridSort(myVector, itemLeft, lower - 1);


        itemLeft = lower + 1;
    }

    insertion(myVector, itemLeft, pivot);
}











#endif