#include <iostream>
#include "leetcode1/two_sums.h"
#include <vector>
#include <iterator>
#include <ctime>
#include <unordered_map>
#include "leetcode2/add_two_numbers.h"
#include <climits>

void twoSum();
void add_two_sums();
int main() {
    using std::cout;
    using std::endl;
    return 0;
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