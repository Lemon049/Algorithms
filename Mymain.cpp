#include <algorithm>
#include <iostream>
#include "InsertionSort.h"
#include "createRandVector.h"
#include "HeapSort.h"
#include "quickSort.h"
#include "RadixSort.h"
#include "RadixSort.h"

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
    int True =0;
    int size = 2;
    for( int j =1; j<100;j++)
    {
        vector <int>a=createRandomVector(size);
        size++;
        //insertionSort(a,a.size());
        //heapSort(a,a.size());
        //quickSort(a,a.size());
        //radixSort(a,a.size());

        if (is_sorted(a.begin(),a.end()))
        {
            True++;
            //cout<<"true";
        }
        /*
        for( int y=0; y<a.size(); y++)
        {
            cout<<" "<<a[y];
        }
        */
    }
    cout<<True;


   //insertionSort(a,a.size());
    //heapSort(a,a.size());
    //quickSort(a,a.size());
    //radixSort(a,a.size());

   return 0;
}

