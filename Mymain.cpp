#include <algorithm>
#include <iostream>
#include "InsertionSort.h"
#include "createRandVector.h"

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {


   vector <int>a=createRandomVector(100);
   insert(a,a.size());
   if (is_sorted(a.begin(),a.end()))
   cout<<"true";
   for(int i=0; i<a.size()-1; i++)
   {
    cout<<" "<<a[i];
   }
}