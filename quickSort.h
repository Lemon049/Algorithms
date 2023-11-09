#ifndef quickSort_H

#define quickSort_H

#include <algorithm>
#include <vector>
using namespace std;

void quickSort(vector <int>& myVector, int len) {

        int pivotIndex =len/2;
        int i =-1;
        int temp = 0;
        int b = 0;


        for(int j=0;j<pivotIndex;)
        {
            if (myVector[j]<myVector[pivotIndex])
            {
                j++;
            }
            else //if (myVector[0]!=myVector[pivotIndex])
            {

                temp = myVector[j];
                for(int b = j;b<myVector[pivotIndex];b++)
                {
                    myVector[b]=myVector[b+1];
                }
                myVector[pivotIndex] = temp;
                pivotIndex -=1;
            }

        }





}


#endif