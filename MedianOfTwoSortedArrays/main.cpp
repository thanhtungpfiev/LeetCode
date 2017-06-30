/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/29/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include <vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    if (m > n) {
        return findMedianSortedArrays(nums2, nums1);
    }

    if (n == 0) {
        return 0;
    }
    int imin = 0;
    int imax = m;
    int half_len = (m + n + 1) / 2;
    int i, j, max_of_left;
    while (imin <= imax) {
        i = (imin + imax) / 2;
        j = half_len - i;

        if (i < m && nums2[j - 1] > nums1[i]) {
            imin = i + 1;
        } else if (i > 0 && nums1[i - 1] > nums2[j]) {
            imax = i - 1;
        } else {
            if (i == 0) {
                max_of_left = nums2[j - 1];
            } else if (j == 0) {
                max_of_left = nums1[i - 1];
            } else {
                max_of_left = max(nums1[i - 1], nums2[j - 1]);
            }
            break;
        }
    }
    if ((m + n) & 1) {
        return max_of_left;
    }

    int min_of_right;
    if (i == m) {
        min_of_right = nums2[j];
    } else if (j == n) {
        min_of_right = nums1[i];
    } else {
        min_of_right = min(nums1[i], nums2[j]);
    }

    return (max_of_left + min_of_right) / 2.0;
}

int main(int argc, char *argv[])
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
