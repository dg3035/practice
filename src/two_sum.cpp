//
// Created by gabad on 4/10/2020.
//

#include "iostream"
#include "bits/stdc++.h"
#include "assert.h"

using namespace std;

// Function definition
vector<int> twoSum(vector<int> &nums, int target) {
    // a + b = target
    // b = target - a ; where a is nums[i]

    vector<int> ans;
    unordered_map<int, int> umap;

    for (int i = 0; i < nums.size(); i++) {
        umap[nums[i]] = i;
    }//unoredred map doesn't allow dublicates


    for (int i = 0; i < nums.size(); i++) {
        auto b_it = umap.find(target - nums[i]);
        //cout<<i<<b_it->second<<endl;

        if (b_it != umap.end() && b_it->second != i) {
            ans.push_back(i);
            ans.push_back(b_it->second);
            break;
        }

    }

    return ans;
}


int main() {
    std::cout << "Start" << std::endl;
    vector<int> val{3, 3};
    vector<int> expected{0, 1};
    assert(twoSum(val, 6) == expected);

    printf("success\n\n");
    return EXIT_SUCCESS;
}