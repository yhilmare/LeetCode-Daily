#include <iostream>
#include "leetcode1/two_sums.h"
#include <vector>
#include <iterator>
#include <ctime>
#include <unordered_map>
#include "leetcode2/add_two_numbers.h"
#include "leetcode3/find_longest_string.h"
#include <cstring>
#include <cmath>
#include "leetcode4/median_two_arrays.h"
#include "leetcode5/longest_palindromic_string.h"

void twoSum();
void add_two_sums();
void longest_substring_without_repeating_characters();
void median_of_two_sorted_array();
void longest_palindrome();

int main() {
    using namespace std;
    return 0;
}
void longest_palindrome(){
    using namespace std;
    cout << longestPalindrome("abcdbbfcba") << endl;
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