#include <iostream>
#include <vector>
#include <ctime>
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "QuickSort3Way.h"
#include "TestTools.h"


int main() {
    int n = 100000;
    cout << "Dataset Size: " << n << endl;
    vector<int> arrRand = TestTools().generateRandom(n,-n,n*2);
    vector<int> arrSorted = TestTools().generateRandomSorted(n, 5);
    vector<int> arrRepeated = TestTools().generateRandomRepeated(n);
    clock_t start_time, end_time;
/*
    // Bubble Sort
    start_time = clock();
    BubbleSort().sort(arrRand);
    end_time = clock();
    TestTools().detectSorted(arrRand);
    TestTools().outputTime("Bubble Sort Random Array",start_time, end_time);

    start_time = clock();
    BubbleSort().sort(arrSorted);
    end_time = clock();
    TestTools().outputTime("Bubble Sort Nearly Sorted Array",start_time, end_time);

    start_time = clock();
    BubbleSort().sort(arrRepeated);
    end_time = clock();
    TestTools().outputTime("Bubble Sort Most Repeated Array",start_time, end_time);


    // Selection Sort
    start_time = clock();
    SelectionSort().sort(arrRand);
    end_time = clock();
    TestTools().detectSorted(arrRand);
    TestTools().outputTime("Selection Sort Random Array",start_time, end_time);

    start_time = clock();
    SelectionSort().sort(arrSorted);
    end_time = clock();
    TestTools().outputTime("Selection Sort Nearly Sorted Array",start_time, end_time);

    start_time = clock();
    SelectionSort().sort(arrRepeated);
    end_time = clock();
    TestTools().outputTime("Selection Sort Most Repeated Array",start_time, end_time);


    arrRand = TestTools().generateRandom(n,-n,n*2);
    arrSorted = TestTools().generateRandomSorted(n, 5);
    arrRepeated = TestTools().generateRandomRepeated(n);
    // Insertion Sort
    start_time = clock();
    InsertionSort().sort(arrRand);
    end_time = clock();
    TestTools().detectSorted(arrRand);
    TestTools().outputTime("Insertion Sort Random Array",start_time, end_time);

    start_time = clock();
    InsertionSort().sort(arrSorted);
    end_time = clock();
    TestTools().outputTime("Insertion Sort Nearly Sorted Array",start_time, end_time);

    start_time = clock();
    InsertionSort().sort(arrRepeated);
    end_time = clock();
    TestTools().outputTime("Insertion Sort Most Repeated Array",start_time, end_time);

 */

    arrRand = TestTools().generateRandom(n,-n,n*2);
    arrSorted = TestTools().generateRandomSorted(n, 5);
    arrRepeated = TestTools().generateRandomRepeated(n);
    // Merge Sort
    start_time = clock();
    MergeSort().sort(arrRand);
    end_time = clock();
    TestTools().detectSorted(arrRand);
    TestTools().outputTime("Merge Sort Random Array",start_time, end_time);

    start_time = clock();
    MergeSort().sort(arrSorted);
    end_time = clock();
    TestTools().outputTime("Merge Sort Nearly Sorted Array",start_time, end_time);

    start_time = clock();
    MergeSort().sort(arrRepeated);
    end_time = clock();
    TestTools().outputTime("Merge Sort Most Repeated Array",start_time, end_time);


    arrRand = TestTools().generateRandom(n,-n,n*2);
    arrSorted = TestTools().generateRandomSorted(n, 5);
    arrRepeated = TestTools().generateRandomRepeated(n);
    // Quick Sort
    start_time = clock();
    QuickSort().sort(arrRand);
    end_time = clock();
    TestTools().detectSorted(arrRand);
    TestTools().outputTime("Quick Sort Random Array",start_time, end_time);

    start_time = clock();
    QuickSort().sort(arrSorted);
    end_time = clock();
    TestTools().outputTime("Quick Sort Nearly Sorted Array",start_time, end_time);

    start_time = clock();
    QuickSort().sort(arrRepeated);
    end_time = clock();
    TestTools().outputTime("Quick Sort Most Repeated Array",start_time, end_time);

    arrRand = TestTools().generateRandom(n,-n,n*2);
    arrSorted = TestTools().generateRandomSorted(n, 5);
    arrRepeated = TestTools().generateRandomRepeated(n);
    // Quick Sort
    start_time = clock();
    QuickSort3Way().sort(arrRand);
    end_time = clock();
    TestTools().detectSorted(arrRand);
    TestTools().outputTime("Quick Sort 3 Way Random Array",start_time, end_time);

    start_time = clock();
    QuickSort3Way().sort(arrSorted);
    end_time = clock();
    TestTools().outputTime("Quick Sort 3 Way Nearly Sorted Array",start_time, end_time);

    start_time = clock();
    QuickSort3Way().sort(arrRepeated);
    end_time = clock();
    TestTools().outputTime("Quick Sort 3 Way Most Repeated Array",start_time, end_time);




    return 0;
}