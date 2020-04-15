#include "iostream"
#include <bits/stdc++.h>
#include "vector"

using namespace std;

bool isAnagram(string s, string t) {
    return true;
}


int main() {
    printf("start\n\n");

    assert(isAnagram("anagram", "nagaram") == true);
    assert(isAnagram("rat", "car") == false);

    printf("success\n\n");
    system("pause");
    return EXIT_SUCCESS;
}