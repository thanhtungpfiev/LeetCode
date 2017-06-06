/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/6/2017
 * \class Solution
 *
 * \brief
 *
 *
 */
#ifndef SOLUTION_H
#define SOLUTION_H

#include <cstddef>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    Solution();

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

#endif // SOLUTION_H
