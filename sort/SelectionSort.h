//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_SELECTIONSORT_H
#define TEACH1027SORT_SELECTIONSORT_H

#include <vector>
using namespace std;

class SelectionSort{

public:
    SelectionSort(){};
    ~SelectionSort(){};

    void sort(vector<int> &arr){
        int len = arr.size();
        for (int i = 0; i < len-1; ++i) {
            int minIndex = i;
            for (int j = i+1; j < len; ++j) {
                if( arr[minIndex] > arr[j] ){
                    minIndex = j;
                }
            }
            swap(arr[i], arr[minIndex]);
        }
    }
};



#endif //TEACH1027SORT_SELECTIONSORT_H
