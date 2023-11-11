#ifndef HeapSort_H

#define HeapSort_H

#include <algorithm>
#include <vector>
using namespace std;

void heapify(vector<int>&myVector, int len, int Parents)
{
   int leftChild = 2 * Parents + 1;

   int rightChild = 2 * Parents +2;

   if (len >= (leftChild-1))  if (myVector[leftChild-2] > myVector[Parents-1])  swap(myVector[leftChild-2],myVector[Parents-1]);

   if (len >= (rightChild-1)) if (myVector[rightChild-2] > myVector[Parents-1]) swap(myVector[rightChild-2],myVector[Parents-1]);
}

void heapSort(vector<int>&myVector, int len){

    int lastElement = len-1;

    for (int i =0; i < len; )
    {
        int Parents = (len)/2;
        while(Parents != 0)
        {
            heapify(myVector,len,Parents);
            Parents--;
        }
        swap(myVector[0],myVector[lastElement]);
        lastElement--;
        len--;

    }
    //reverse(myVector.begin(),myVector.end());

}
#endif