#ifndef InsertionSort_H

#define InsertionSort_H
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void insertionSort(vector<int>& xs ){
    for (int i = 1 ; i < xs.size() ; i++) {
        int val = xs[i];
        int cur = i;

        while (cur > 0 && xs[cur - 1] > val) {
            xs[cur] = xs[cur - 1];
            cur--;
        }

        xs[cur] = val;
    }
}

#endif