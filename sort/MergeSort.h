//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_MERGESORT_H
#define TEACH1027SORT_MERGESORT_H

#include <vector>
using namespace std;

class MergeSort{

private:

    void __merge(vector<int> &arr, int l, int mid, int r){
        vector<int> aux(r-l+1, 0);
        for (int i = l; i <= r; ++i) {
            aux[i-l] = arr[i];
        }

        int i = l;
        int k = mid+1;
        for (int j = l; j <= r; ++j) {

            if( i > mid ){
                arr[j] = aux[k-l];
                k++;
            }else if( k > r ){
                arr[j] = aux[i-l];
                i++;
            }else if( aux[i-l] > aux[k-l]){
                arr[j] = aux[k-l];
                k++ ;
            }else { // if( aux[i-l] <= aux[k-l])
                arr[j] = aux[i-l];
                i++;
            }
        }
    }

    void __MergeSort(vector<int> &arr, int l, int r){
        if( l >= r)
            return;

        int mid = l + (r-l)/2; //(r+l)/2;//
        // [l. r]
        __MergeSort(arr, l, mid);
        __MergeSort(arr, mid+1, r);

        if(arr[mid] > arr[mid+1]){
            __merge(arr, l, mid, r);
        }
    }

public:
    MergeSort(){};
    ~MergeSort(){};

    void sort(vector<int> &arr){
        int len = arr.size();
        // [l, r] [0, len-1]
        __MergeSort(arr, 0, len-1);
    }
};


#endif //TEACH1027SORT_MERGESORT_H
