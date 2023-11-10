#ifndef HeapSort_H

#define HeapSort_H

#include <algorithm>
#include <vector>
using namespace std;

void heapSort(vector <int>& myVector, int len)
{
    //int numberOfSortedElements = 0;
    int whichElement =0;
    int j =0;
   //while (numberOfSortedElements == len-1)
   for(int f = 0; f < len; f++ )
    {

        int maxValue = myVector[j];
        for (int i = j+1; i < len; i++) {

            if (myVector[i] > maxValue) {
                maxValue = myVector[i];
                whichElement = i;
            }
        }
        if(myVector[j] != myVector[whichElement] && whichElement !=0)
            swap(myVector[j],myVector[whichElement]);
            j++;

        whichElement =0;
      //  numberOfSortedElements++;
    }
    reverse(myVector.begin(), myVector.end());




}
#endif