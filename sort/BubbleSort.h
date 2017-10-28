//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_BUBBLESORT_H
#define TEACH1027SORT_BUBBLESORT_H

#include <vector>
using namespace std;

class BubbleSort{

public:
    BubbleSort(){
    }
    ~BubbleSort(){};

    void sort(vector<int> &arr){
        int len = arr.size();
        for (int j = 0; j < len; ++j) {
            for (int i = 0; i < len-j; ++i) {
                    if( arr[i] >  arr[i+1] ){
                        swap(arr[i], arr[i+1]);
                    }
            }
        }
    }
};


#endif //TEACH1027SORT_BUBBLESORT_H
