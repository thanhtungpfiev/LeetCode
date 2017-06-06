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
#include "solution.h"

Solution::Solution()
{

}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode result(0), *p = &result;
    int extra = 0;
    while (l1 || l2 || extra) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
        extra = sum / 10;
        p->next = new ListNode(sum % 10);
        p = p->next;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;

    }
    return result.next;
}
