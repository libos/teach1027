#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

vector<int> memo;

int fib1( int n ){
    if ( n == 1 || n == 2){
        return 1;
    }
    return fib1(n-1) + fib1(n-2);
}

int fib2(int n) {
    if( memo[n] != 0 )
        return memo[n];
    memo[n] = fib2(n-1) + fib2(n-2);
    return memo[n];
}

int fib3(int n){
    vector<int> fib(n+1,0);

    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i < n+1; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}

int main() {
    int n = 40;
    memo = vector<int>(n+1,0);
    memo[1] = 1;
    memo[2] = 1;
//    fib1
    clock_t start_time = clock();
    cout << fib1(n) << endl;
    clock_t end_time = clock();
    cout << "fib1:" << (double)(end_time - start_time) / (double)CLOCKS_PER_SEC << "s" << endl;

//    fib2
    start_time = clock();
    cout << fib2(n) << endl;
    end_time = clock();
    cout << "fib2:" << (double)(end_time - start_time) / (double)CLOCKS_PER_SEC << "s" << endl;

//    fib3
    start_time = clock();
    cout << fib3(n) << endl;
    end_time = clock();
    cout << "fib3:" << (double)(end_time - start_time) / (double)CLOCKS_PER_SEC << "s" << endl;

    return 0;
}