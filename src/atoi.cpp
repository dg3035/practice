#include "iostream"
#include <bits/stdc++.h>
#include "vector"

using namespace std;

int myAtoi(string str) {
    return 0;
}


int main() {
    cout << "here";


    assert(myAtoi("42") == 42);
    assert(myAtoi("   -42") == -42);
    assert(myAtoi("4193 with words") == 4193);
    assert(myAtoi("words and 987") == 0);
    assert(myAtoi("-91283472332") == -2147483648);


    printf("success\n\n");
    system("pause");
    return EXIT_SUCCESS;
}