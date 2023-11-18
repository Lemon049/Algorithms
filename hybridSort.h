#ifndef hybridSort_H

#define hybridSort_H
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;





void insertion(vector<int>& xs, int limit) {
    for (int i = 1 ; i < limit ; i++) {
        int val = xs[i];
        int cur = i;

        while (cur > 0 && xs[cur - 1] > val) {
            xs[cur] = xs[cur - 1];
            cur--;
        }

        xs[cur] = val;
    }
}
void hybridSort(vector<int>& myVector, int itemLeft, int pivot, bool sorted) {

    if (itemLeft < pivot && sorted == false) {
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
        bool Sorted = sorted;
        if((lower-1)>60)
            hybridSort(myVector, itemLeft, lower - 1,Sorted);
        else
        {
            insertion(myVector, lower-1);
            Sorted=true;
        }
        Sorted=false;

        if ((pivot-(lower+1))>60)
            hybridSort(myVector, lower + 1, pivot,Sorted);
        else
            insertion(myVector,myVector.size());
    }
}











#endif