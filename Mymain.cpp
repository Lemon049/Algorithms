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
   vector <int>a=createRandomVector(7);
   //insertionSort(a,a.size());
    //heapSort(a,a.size());
    //quickSort(a,a.size());
    radixSort(a,a.size());
   if (is_sorted(a.begin(),a.end()))
   cout<<"true";
   for(int i=0; i<a.size(); i++)
   {
    cout<<" "<<a[i];
   }
   return 0;
}