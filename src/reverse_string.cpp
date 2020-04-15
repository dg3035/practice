#include "iostream"
#include "bits/stdc++.h"
#include "assert.h"

using namespace std;

// Function definition
void reverseString(vector<char> &s) {

}


int main() {
    printf("start\n\n");
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    vector<char> e1 = {'o', 'l', 'l', 'e', 'h'};
    reverseString(s1);
    assert(s1 == e1);

    vector<char> s2 = {'H','a','n','n','a','h'};
    vector<char> e2 = {'h','a','n','n','a','H'};
    reverseString(s2);
    assert(s2 == e2);


    printf("success\n\n");
    system("pause");
    return EXIT_SUCCESS;
}