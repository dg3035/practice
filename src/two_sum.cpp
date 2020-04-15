//
// Created by gabad on 4/10/2020.
//

#include "iostream"
#include "assert.h"
#include <vector>
#include <unordered_map>

using namespace std;

// Function definition
vector<int> twoSum(vector<int>& nums, int target) {
    // a + b = target
    // b = target - a ; where a is nums[i]

    vector<int> ans;
    unordered_multimap<int,int> umap;


    cout<<endl;

    for(int i = 0; i < nums.size() ; i++){
        umap.insert(make_pair(nums[i],i));
        auto b_it = umap.find(target - nums[i]);
        cout<<b_it->second<< "I am the found answer" << b_it->first << "my index"<<endl;

        if(b_it != umap.end() && b_it -> second != i) {
            ans.push_back(b_it->second);
            ans.push_back(i);
            break;
        }

    }
    for(auto x: umap) cout<<x.first<<x.second<<endl;
    return ans;
	
}

int main() {
    std::cout << "Start" << std::endl;
    vector<int> val{3, 3};
    vector<int> expected{0, 1};
    assert(twoSum(val, 6) == expected);

    printf("success\n\n");
	system("pause");
    return EXIT_SUCCESS;
}