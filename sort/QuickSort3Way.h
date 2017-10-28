//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_QUICKSORT3WAY_H
#define TEACH1027SORT_QUICKSORT3WAY_H

#include <vector>
#include <ctime>

using namespace std;

class QuickSort3Way{

private:

    pair<int,int> __partition(vector<int> &arr, int l, int r){

        swap(arr[l],arr[l+rand()%(r-l+1)]);
        int base = arr[l];

        int lt = l;     // arr[l+1...lt] < base
        int gt = r + 1; // arr[gt...r] > base
        int i = l+1;    // arr[lt+1...i) == base
        while( i < gt ){
            if( arr[i] < base ){
                swap( arr[i], arr[lt+1]);
                i ++;
                lt ++;
            }
            else if( arr[i] > base ){
                swap( arr[i], arr[gt-1]);
                gt --; //i should not move!!!!!!
            }
            else{ // arr[i] == base
                i ++;
            }
        }

        swap(arr[l], arr[lt]);
        return make_pair(lt,gt);
    }
    void __QuickSort(vector<int> &arr, int l, int r){
        if(l >= r)
            return;



        // [l, r]
        pair<int,int> p = __partition(arr, l, r);
        __QuickSort(arr, l, p.first);
        __QuickSort(arr, p.second, r);

    }

public:
    QuickSort3Way(){};
    ~QuickSort3Way(){};

    void sort(vector<int> &arr){
        srand(time(NULL));
        int len = arr.size();
        __QuickSort(arr, 0, len-1);
    }
};



#endif //TEACH1027SORT_QUICKSORT3WAY_H
