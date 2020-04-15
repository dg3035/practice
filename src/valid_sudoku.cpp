//
// Created by gabad on 4/12/2020.
//

#include "iostream"
#include "bits/stdc++.h"
#include "assert.h"

using namespace std;

// Function definition
bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<char, int> row_hash;
    unordered_map<int,unordered_map<char,int>> column_hash;
    unordered_map<int,unordered_map<char,int>> sub_box_hash;

    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){

            if(board[i][j] != '.'){
                row_hash[board[i][j]] += 1;
                column_hash[j][board[i][j]] += 1;
                sub_box_hash[((i/3) * 3 + j/3 )/3][board[i][j]] += 1;
            }
            if(row_hash[board[i][j]] > 1 ||
               column_hash[j][board[i][j]]  >  1 ||
               sub_box_hash[((i/3) * 3 + j/3 )/3 ][board[i][j]] > 1 ){

                return false;
            }

        }
        if((i%3) == 0 & i != 0) {
            sub_box_hash.erase(sub_box_hash.begin(),sub_box_hash.end());
        }
        row_hash.erase(row_hash.begin(),row_hash.end());

    }

    return true;
}


int main(void) {
    cout << "here\n\n";

    vector<vector<char>> b{{'8', '1', '.', '.', '7', '.', '.', '.', '.'},
                           {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                           {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                           {'1', '.', '.', '.', '6', '.', '.', '.', '3'},
                           {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                           {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                           {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                           {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                           {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

//    vector<vector<char>> b{{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//                           {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//                           {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//                           {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//                           {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//                           {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//                           {'.', '6', '.', '1', '.', '.', '2', '8', '.'},
//                           {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//                           {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
//    };

    cout << isValidSudoku(b);

    cout << "here";
    cin.get();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}