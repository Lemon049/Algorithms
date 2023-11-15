#include <algorithm>
#include <iostream>
#include "InsertionSort.h"
#include "createRandVector.h"
#include "HeapSort.h"
#include "quickSort.h"
#include "RadixSort.h"


#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <ctime>

using namespace std;
using namespace chrono;
int main() {


    std::chrono::time_point<std::chrono::system_clock> start, end;
    int True = 0;

    vector<int> testSizes = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200,
                             300, 400, 500, 600, 700, 800, 900, 1000, 2000,
                             3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    for (int sizes: testSizes) {


        vector<int> myVector = createRandomVector(sizes);
        quickSort(myVector, 0, myVector.size() - 1);
        //radix(myVector);
        //insertionsort(myVector);
        //MainSort(myVector, myVector.size()); //  <-heap sort

    }
    {


        start = std::chrono::high_resolution_clock::now();

        //  size++;
        // quickSort(a,0,size-1);
        //heapSort(a);
        //radixSort(a);
        //insertionSort(a,a.size());
        end = std::chrono::high_resolution_clock::now();

        chrono::duration<double> elapsed_seconds = end - start;
        float ms = elapsed_seconds.count() * 1000.0f;
        time_t end_time = chrono::system_clock::to_time_t(end);

        cout << "\nelapsed time: " << ms << "s\n";
        std::cout << "MAX" << RAND_MAX << std::endl;
        // heapSort(a,a.size());

        //quickSort(a,0,size-1);
        //radixSort(a,a.size());


        /*
        if (is_sorted(a.begin(),a.end()))
        {
            True++;
            cout<<"true";
        }

       for( int y=0; y<a.size(); y++)
        {
            cout<<" "<<a[y];
        }

    }
         */
        // cout<<True;

        return 0;
    }

}