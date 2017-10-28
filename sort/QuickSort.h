//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_QUICKSORT_H
#define TEACH1027SORT_QUICKSORT_H


#include <vector>
#include <ctime>
using namespace std;

class QuickSort{

private:

    int __partition(vector<int> &arr, int l, int r){

        swap(arr[l],arr[l+rand()%(r-l+1)]);
        int base = arr[l];//arr[l];s

        int j = l+1;
        for (int i = l+1; i <= r; ++i) {
            if( base > arr[i]){
                swap(arr[i], arr[j]);
                j++;
            }
        }
        swap(arr[l], arr[j-1]);
        return j-1;
    }
    void __QuickSort(vector<int> &arr, int l, int r){
        if(l >= r)
            return;

        // [l, r]
        int p = __partition(arr, l, r);
        __QuickSort(arr, l, p-1);
        __QuickSort(arr, p+1, r);

    }

public:
    QuickSort(){};
    ~QuickSort(){};

    void sort(vector<int> &arr){
        srand(time(NULL));
        int len = arr.size();
        __QuickSort(arr, 0, len-1);
    }
};


#endif //TEACH1027SORT_QUICKSORT_H
