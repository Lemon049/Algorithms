#include <algorithm>
#include <iostream>
#include "InsertionSort.h"
#include "createRandVector.h"
#include "HeapSort.h"
#include "quickSort.h"
#include "RadixSort.h"
#include "hybridSort.h"

#include <string>
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

    double average1 =0;
    double average2 =0;
    double average3 =0;
    double average4 =0;
    double average5 =0;

    string value1 ;
    string value2 ;
    string value3 ;
    string value4 ;
    string value5 ;

    std::chrono::time_point<std::chrono::system_clock> start, end;
    float ms =0;
    cout<<"size"<<" quick"<<" radix"<<" insertion"<<" heap" << " hybrid"<<endl;
    vector<int> testSizes = { 800, 900, 1000, 2000,
                             3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};

    chrono::duration<double> elapsed_seconds;
    for (int size: testSizes) {


        for (int i = 0; i < 100; i++) {
            vector<int> myVector = createRandomVector(size);
            vector<int> myVector2 = myVector;
            vector<int> myVector3 = myVector;
            vector<int> myVector4 = myVector;
            vector<int> myVector5 = myVector;


            //-----------------------------------------------------------------
            start = std::chrono::high_resolution_clock::now();

            quickSort(myVector, 0, myVector.size() - 1);

            end = std::chrono::high_resolution_clock::now();
            elapsed_seconds = end - start;
            average1 += elapsed_seconds.count() * 1000.0f;
            //--------------------------------------------------------------
            start = std::chrono::high_resolution_clock::now();

            radixSort(myVector2);

            end = std::chrono::high_resolution_clock::now();
            elapsed_seconds = end - start;
            average2 += elapsed_seconds.count() * 1000.0f;
            //--------------------------------------------------------------
            start = std::chrono::high_resolution_clock::now();

            insertionSort(myVector3);

            end = std::chrono::high_resolution_clock::now();
            elapsed_seconds = end - start;
            average3 += elapsed_seconds.count() * 1000.0f;
            //--------------------------------------------------------------
            start = std::chrono::high_resolution_clock::now();

            heapSort(myVector4);

            end = std::chrono::high_resolution_clock::now();
            elapsed_seconds = end - start;
            average4 += elapsed_seconds.count() * 1000.0f;
            //--------------------------------------------------------------
            start = std::chrono::high_resolution_clock::now();

            hybridSort(myVector5, 0, myVector.size() - 1, false);

            end = std::chrono::high_resolution_clock::now();
            elapsed_seconds = end - start;
            average5 += elapsed_seconds.count() * 1000.0f;
        }
        average1 /=100;
        average2 /=100;
        average3 /=100;
        average4 /=100;
        average5 /=100;
        cout << size << " | " << average1 << " | " << average2 << " | " << average3 << " | " << average4 <<" | "<< average5 << endl;
/*
        value1 += to_string(average1) + ", ";
        value2 += to_string(average2) + ", ";
        value3 += to_string(average3) + ", ";
        value4 += to_string(average4) + ", ";
        value4 += to_string(average5) + ", ";
        average1 = 0;
        average2 = 0;
        average3 = 0;
        average4 = 0;
        average5 = 0;
        */
    }
    /*
        cout<<"end";
        cout<<"\n"<<value1<<"\n";
        cout<<"\n"<<value2<<"\n";
        cout<<"\n"<<value3<<"\n";
        cout<<"\n"<<value4<<"\n";
        */





        /*
        //-----------------------------------------------------------------
        start = std::chrono::high_resolution_clock::now();

        radixSort(myVector2);

        end = std::chrono::high_resolution_clock::now();
        elapsed_seconds = end - start;
        ms = elapsed_seconds.count() * 1000.0f;
        cout << ms << "  ";
        //-----------------------------------------------------------------
        start = std::chrono::high_resolution_clock::now();

        insertionSort(myVector3, size);

        end = std::chrono::high_resolution_clock::now();
        elapsed_seconds = end - start;
        ms = elapsed_seconds.count() * 1000.0f;
        cout << ms << "  ";
        //-----------------------------------------------------------------

        start = std::chrono::high_resolution_clock::now();

        heapSort(myVector4);

        end = std::chrono::high_resolution_clock::now();
        elapsed_seconds = end - start;
        ms = elapsed_seconds.count() * 1000.0f;
        cout << ms << "  " << endl;
        //radix(myVector);
        //insertionsort(myVector);
        //MainSort(myVector, myVector.size()); //  <-heap sort
*/



        //  size++;
        // quickSort(a,0,size-1);
        //heapSort(a);
        //radixSort(a);
        return 0;
}