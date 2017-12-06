//  mergesortImproved.cpp: It is the imporved version of mergesort.cpp file
//  Tamanna Sharma
//  Version: 1.0 11/29/2017

#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;

/*---------------mergesortImproved--------------------------------------*/
template <class Comparable>
void mergesortImproved(vector<Comparable> &a) {
    int first;
    int last;
    int mid;
    int size = a.size ();
    vector < Comparable > b (size);
    
    int length;
    int leftIndex = first;
    int rightIndex = mid;
    for (length = 1; length < size; length = length * 2)
    {
        for (int i = first; i < last; i++)
        {
            
            if (leftIndex < mid
                && (rightIndex >= last || a[leftIndex] <= a[rightIndex]))
            {
                b[i] = a[leftIndex];
                leftIndex = leftIndex + 1;
            }
            else
            {
                b[i] = a[rightIndex];
                rightIndex = rightIndex + 1;
            }
        }
        for (int left = 0; left < size; left = left + 2 * length)
        {
            int right = min (left + length, size);
            int last = min (left + 2 * length, size);
            
        }
        a = b;
    }
}

