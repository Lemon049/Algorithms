#ifndef InsertionSort_H

#define InsertionSort_H

#include <algorithm>
#include <vector>
using namespace std;

void insert(vector <int>&   array, int len) {
for (int i=1; i<len; i++)
{
      int valueI = array[i];


        for (int j=0; j<i; j++)
        {
            int valueToCompareJ = array[j];

            if(valueToCompareJ > valueI)
            {
                swap(array[j],array[i]);
            }

        }

}
 }
#endif