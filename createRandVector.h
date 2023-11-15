#ifndef createRandVector_H
#define createRandVector_H

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <random>
using namespace std;

vector<int> createRandomVector(int size)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(0, 1000000);

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        vec[i] = dist(gen);
    }
    return vec;
}





#endif