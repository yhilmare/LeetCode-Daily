#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include <cstring>
#include <cmath>
#include <climits>
#include <unordered_map>
#include "leetcode1/two_sums.h"
#include "leetcode2/add_two_numbers.h"
#include "leetcode3/find_longest_string.h"
#include "leetcode4/median_two_arrays.h"
#include "leetcode5/longest_palindromic_string.h"
#include "leetcode6/zigzag_conversion.h"
#include "leetcode7/reverse_integer.h"
#include "leetcode8/atoi.h"
#include "leetcode9/palindrome_number.h"
#include "leetcode10/regular_expression.h"
#include "leetcode11/container_with_most_water.h"
#include "leetcode12/integer_to_roman.h"
#include "leetcode13/roman_to_integer.h"
#include "leetcode14/longest_common_prefix.h"
#include "leetcode15/three_sum.h"

void twoSum();
void add_two_sums();
void longest_substring_without_repeating_characters();
void median_of_two_sorted_array();
void longest_palindrome();
void zigzag_string();
void reverse_integer();
void myatio();
void palindrome();
void max_area();
void longest_common_prefix();

int main() {
    using namespace std;
    vector<int> nums = {-1, -1, -1, 2, 2, 2, 2};
    vector<vector<int>> res = threeSum(nums);
    for (int i = 0; i < res.size(); i ++){
        vector<int> tmp = res[i];
        for (int j = 0; j < tmp.size(); j ++){
            cout << tmp[j] << " ";
        }
        cout << endl;
    }
}

void longest_common_prefix(){
    using namespace std;
    vector<string> vec = {"flower", "flight", ""};
    cout << longestCommonPrefix(vec) << endl;
}
void roman_to_integer(){
    using namespace std;
    cout << intToRoman(61) << endl;
}
void max_area(){
    using namespace std;
    vector<int> vec = {1,2};
    cout << maxArea(vec) << endl;
}

void palindrome(){
    using namespace std;
    cout << isPalindrome(0) << endl;
}
void myatio(){
    using namespace std;
    string str = " -42";
    cout << myAtoi(str) << endl;
}
void reverse_integer(){
    using namespace std;
    cout << reverse(1463847412) << endl;
}
void zigzag_string(){
    using namespace std;
    cout << convert("PAYPALISHIRING", 4) << endl;
}
void longest_palindrome(){
    using namespace std;
    cout << longestPalindrome("asdasfswertertergdfbfghrthr") << endl;
}

void median_of_two_sorted_array(){
    using namespace std;
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
}
void longest_substring_without_repeating_characters(){
    using namespace std;
    cout << pure_lengthOfLongestSubstring("dvdf") << endl;
}
void add_two_sums(){
    digits_linked_list num1(9);
    std::vector<int> vec = {9,9,9,9,9,9,9,9,9,1};
    digits_linked_list num2(vec);
    std::cout << num2 << std::endl;
    std::cout << num1 + num2 << std::endl;
}
void twoSum(){
    std::vector<int> vec = {2,7,11,15};
    std::ostream_iterator<int, char> iter(std::cout, ", ");
    std::vector<int> tmp = twoSum(vec, 9);
    copy(tmp.begin(), tmp.end(), iter);
}