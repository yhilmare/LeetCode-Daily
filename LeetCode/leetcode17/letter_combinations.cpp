//
// Created by ilmare on 2/22/19.
//

#include "letter_combinations.h"
#include <unordered_map>
#include <iostream>

void letterCombinations(std::string digits, std::string& combination, int idx,
                        std::unordered_map<char, std::string>& num_to_char, std::vector<std::string>& result) {
    if (idx == digits.length()){
        result.push_back(combination);
        return;
    }

    for (char c : num_to_char[digits[idx]]){
        combination[idx] = c;
        letterCombinations(digits, combination, idx + 1, num_to_char, result);
    }
}

std::vector<std::string> letterCombinations(std::string digits){
    if (digits.empty()) return {};
    using namespace std;
    unordered_map<char, string> num_to_char {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> result; string combination(digits.length(), ' ');
    letterCombinations(digits, combination, 0, num_to_char, result);
    return result;
}

