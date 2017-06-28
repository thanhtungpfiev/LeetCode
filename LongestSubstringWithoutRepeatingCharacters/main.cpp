/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/26/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int maxLen = 0, start = -1;
    std::unordered_map<char, int> hash;
    for (int i = 0; i < s.length(); ++i) {
        if (hash.find(s[i]) != hash.end() && hash.find(s[i])->second > start) {
            start = hash.find(s[i])->second;
        }
        hash[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    return maxLen;
}

int main(int argc, char *argv[])
{
    string s;
    s = "abcabcbb";
    cout << s << ": " << lengthOfLongestSubstring(s) << endl;
    s = "bbbbb";
    cout << s << ": " << lengthOfLongestSubstring(s) << endl;
    s = "pwwkew";
    cout << s << ": " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
