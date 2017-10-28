//
// Created by Libo Liu on 27/10/2017.
//

#ifndef TEACH1027SORT_TESTTOOLS_H
#define TEACH1027SORT_TESTTOOLS_H

#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
class TestTools {
public:
    TestTools(){};
    ~TestTools(){};

    vector<int> generateRandom(int n, int l, int r){
        vector<int> arr(n,0);
        srand(time(NULL));

        for (int i = 0; i < n; ++i) {
            arr[i] = l+rand()%(r-l+1);
        }
        return arr;
    }

    vector<int> generateRandomSorted(int n, int _swap){
        vector<int> arr(n,0);

        for (int i = 0; i < n; ++i) {
            arr[i] = i;
        }
        for (int j = 0; j < _swap; ++j) {
            int a = rand()%n;
            int b = rand()%n;
            swap(arr[a], arr[b]);
        }
        return arr;
    }

    vector<int> generateRandomRepeated(int n){
        vector<int> arr(n,0);

        srand(time(NULL));

        for (int i = 0; i < n; ++i) {
            arr[i] = rand()%8;
        }
        return arr;
    }

    bool detectSorted(vector<int> arr){
        int len = arr.size();
        for (int i = 0; i < len-1; ++i) {
            if ( arr[i] > arr[i+1] ){
                cout << "Error" << arr[i] << "  " << arr[i+1] << endl;
                return false;
            }
        }
        cout << "Sorted" << endl;
        return true;
    }

    void outputTime(string name,clock_t start_time, clock_t end_time){
        cout << name << " cost: " << (double)(end_time - start_time)/(double)(CLOCKS_PER_SEC) <<  "s" << endl;
    }
    void outputArray(vector<int> arr){
        for (int i = 0; i < arr.size(); ++i) {
            cout << arr[i] << " " << endl;
        }
    }
};

#endif //TEACH1027SORT_TESTTOOLS_H
