//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_INSERTIONSORT_H
#define TEACH1027SORT_INSERTIONSORT_H

#include <vector>
using namespace std;

class InsertionSort{

public:
    InsertionSort(){};
    ~InsertionSort(){};

    void sort(vector<int> &arr){
        int len = arr.size();
        for (int i = 1; i < len; ++i) {
            int tmp = arr[i];
            for (int j = i-1; j >= 0; --j) {
                if (tmp < arr[j]){
                    arr[j+1] = arr[j];
                }else{
                    arr[j+1] = tmp;
                    break;
                }
            }
        }
    }

};



#endif //TEACH1027SORT_INSERTIONSORT_H
