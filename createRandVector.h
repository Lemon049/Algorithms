#ifndef createRandVector_H
#define createRandVector_H

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> createRandomVector(int size)
{
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        vec[i] = rand();
    }
    return vec;
}





#endif