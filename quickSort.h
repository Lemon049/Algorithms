#ifndef quickSort_H

#define quickSort_H

#include <algorithm>
#include <vector>
#include <iostream>

int quick(vector<int> &vector, int len);

using namespace std;


void quickSort(vector <int>& myVector, int len) {
    int a = quick(myVector,len);

   // while (is_sorted(myVector.begin(), myVector.begin() + a)) {
//if (a==0)
    //break;
      //  a = quick(myVector, a);
     //   a--;


    ///}



// quick(myVector,len);

    }


    int quick(vec, int left, int right)

int quick(vector <int> &myVector, int len)
{
    int pivotIndex = len / 2;
    int temp, b,d;


    cout << myVector[pivotIndex]<<"|";
    int SecondPartIndex = 0;
//(is_sorted(myVector.begin(), myVector.begin() + pivotIndex))

    for (int j = 0; j < pivotIndex;) {
        if (myVector[j] < myVector[pivotIndex]) {
            j++;
        } else //if (myVector[0]!=myVector[pivotIndex])
        {

            temp = myVector[j];
            for (int b = j; b < pivotIndex; b++) {
                myVector[b] = myVector[b + 1];
            }
            myVector[pivotIndex] = temp;
            pivotIndex -= 1;
        }


    }



    //vector<int> subsetVector(myVector.begin(), myVector.begin() + pivotIndex);

    if (pivotIndex != len && pivotIndex != 0) {
        for (int j = pivotIndex + 1; j < len;) {
            if (myVector[j] > myVector[pivotIndex]) {
                j++;
            } else //if (myVector[0]!=myVector[pivotIndex])
            {

                temp = myVector[j];
                for (int d = j; d != pivotIndex; d--) {
                    myVector[d] = myVector[d - 1];
                }
                myVector[pivotIndex] = temp;
                pivotIndex += 1;
                j = pivotIndex + 1;
            }

        }

    }

    // for(int y = 4;(is_sorted(myVector.begin(), myVector.begin() + pivotIndex));y--)

        return pivotIndex;
}



#endif