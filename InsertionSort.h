#ifndef InsertionSort_H

#define InsertionSort_H
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

 void insertionSort(vector <int>& myVector,int len) {
    for (int i=1; i<len; i++)
    {

        for (int j=0; j<i; j++)
        {
            if(myVector[j] > myVector[j+1])
            {
                int temp = myVector[j+1];
                int y = j;
                for(;temp < myVector[y] && y > -1;y-- )
                {
                    myVector[y+1]=myVector[y];
                }
                myVector[y+1]=temp;
            }
        //8e-07s


        }
    }
}

#endif