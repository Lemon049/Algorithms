#ifndef RadixSort_H

#define RadixSort_H

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

#include <iostream>
#include <vector>

/*
 Quick reminder on how everything is working
    Step 1 : find Max value ( use it then to find whichDigit of max number )
    Step 2 : perform countSort with param whichDigit
    ( increase every time by 10 to work with next digit of number )
        tempVectoring sort ( how it is working )
            Step 1 - create two vectors ( [tempVector] and [finalVector] )
            Step 2 - use [tempVector] to store each count of last digit of element of myVector
                     For example: 456 and we use module of 10  to separate 45|6
                     and then count it and then repeat until the reach the end of myVector
            Step 3 - after finished counting use [tempVector] to add previous element of this
            vector to next
            Step 4 - store in [finalVector] numbers from myVector in order to
            write them back in correct order
            Step 5 - write numbers from [finalVector] into myVector
    Step 3 : continue this recursion until we will get result
 */
int calculate(vector<int>& myVector, int i,int whichDigit) {

    return(myVector[i] / whichDigit) % 10;

}
void countSort(vector<int>& myVector, int whichDigit) {
    int size = myVector.size();
    //Step 1
    vector<int> finalVector(size, 0);
    vector<int> tempVector(10, 0);
    //Step 2
    for (int i = 0; i < size; ++i) {
        int digit =  calculate(myVector,i,whichDigit);
        tempVector[digit]++;
    }
    //Step 3
    for (int i = 1; i < 10; ++i) {
        tempVector[i] += tempVector[i - 1];
    }
    //Step 4
    for (int i = size - 1; i >= 0; --i) {
        int digit =  calculate(myVector,i,whichDigit);
        finalVector[tempVector[digit] - 1] = myVector[i];
        tempVector[digit]--;
    }
    //Step 5
    for (int i = 0; i < size; ++i) {
        myVector[i] = finalVector[i];
    }
}


void radixSort(vector<int>& myVector) {
    //Step 1
    int max = myVector[0];
    int whichDigit = 1;
    for (int i = 1; i < myVector.size(); ++i) {
        if (myVector[i] > max) {
            max = myVector[i];
        }
    }
    
    while (max / whichDigit > 0) //Step 3
    {
        //Step 2
        countSort(myVector, whichDigit);
        whichDigit *= 10;
    }
}






#endif