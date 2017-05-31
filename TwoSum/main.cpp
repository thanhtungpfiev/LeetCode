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
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    std::unordered_map<int, int> hash;
    for (unsigned int i = 0; i < nums.size(); ++i) {
        int complement = target - nums.at(i);
        if (hash.find(complement) != hash.end()) {
            result.push_back(hash[complement]);
            result.push_back(i);
            return result;
        }
        hash[nums.at(i)] = i;
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
