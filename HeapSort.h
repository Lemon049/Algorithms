#ifndef HeapSort_H

#define HeapSort_H

#include <algorithm>
#include <vector>
using namespace std;

void heapSort(vector <int>& myVector, int len)
{
    int numberOfSortedElements;
   // int maxValue = myVector[0];
    int whichElement;
    int j =0;
   // while (numberOfSortedElements == len-1)
    {
        int maxValue = myVector[j];
        for (int i = 1 ; i < len; i++) {

            if (myVector[i] > maxValue) {
                maxValue = myVector[i];
                whichElement = i;S
            }
        }
            swap(myVector[j],myVector[whichElement]);
            j++;

       // numberOfSortedElements++;
    }





}
#endif