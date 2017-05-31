/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/30/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (unsigned int i = 0; i < nums.size() - 1; ++i) {
        for (unsigned int j =  i + 1; j < nums.size(); ++j) {
            if (nums.at(i) + nums.at(j) == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main(int argc, char *argv[])
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = twoSum(nums, target);
    for (const auto &e : result) {
        cout << e << endl;
    }
    return 0;
}
