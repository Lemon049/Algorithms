#ifndef RadixSort_H

#define RadixSort_H

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void radixSort(vector <int>& myVector, int len) {
int number =0;
int mNumber = 10;
int dNumber = 1;
int maxValue = myVector[0];
int temp=0;
int numberOfDigits =1;
int lastValue = 0;
    for(int f = 1; f < len; f++ ) {
        if(myVector[f]> maxValue)
         maxValue = myVector[f];
    }
    while(maxValue>9)
    {
        maxValue/=10;
        numberOfDigits++;
    }


    for (int j =1;j<numberOfDigits+1;j++) {
        lastValue = 0;

    if(j>=2)
    {
        mNumber *=10;
        dNumber *=10;
    }
            for(int y =0;y<10;y++)
            {
                for (int i = 0; i < len; i++) {

                    number = (myVector[i] % mNumber) / dNumber;
                    if (number == y)
                    {
                        temp=myVector[i];
                        for (int b = i; b > lastValue; b--) {
                            myVector[b] = myVector[b-1];
                        }
                        myVector[lastValue] = temp;

                       // swap(myVector[lastValue],myVector[i]);
                        lastValue++;
                    }


                }

            }


    }

}



#endif