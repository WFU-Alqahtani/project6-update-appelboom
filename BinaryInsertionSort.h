#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H

#include <vector>
#include "CSMatch.h"
using namespace std;

int binarySearch(vector<CSMatch> a, int item, int low, int high);
void insertionSort(vector<CSMatch> &a, int n);

#endif //BINARYINSERTIONSORT_H
