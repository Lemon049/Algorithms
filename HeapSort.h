#ifndef HeapSort_H

#define HeapSort_H

#include <algorithm>
#include <vector>
using namespace std;
#include <iostream>
#include <vector>



void heapify(vector<int>& myVector, int size, int Parent) {
    
    int largestNumber = Parent;
    
    int left = 2 * Parent + 1;
    
    int right = 2 * Parent + 2;

    if ( left < size )
    {
        if ( myVector[left] > myVector[Parent])
        largestNumber = left;
        if (right < size )
        {
            if (myVector[right] > myVector[left] && myVector[right] >myVector[Parent] )
            {
                largestNumber = right;
            }

        }

    }


    if (largestNumber != Parent) {
        swap(myVector[Parent], myVector[largestNumber]);
        heapify(myVector, size, largestNumber);
    }
}

void heapSort(vector<int>& myVector) {

    int size = myVector.size();

    int i = size / 2 - 1;;

    while(i >= 0)
    {
        heapify(myVector, size, i);
        --i;
    }

    i = size - 1;

    while(i > 0)
    {
        swap(myVector[0], myVector[i]);
        heapify(myVector, i, 0);
        --i;
    }



}
#endif