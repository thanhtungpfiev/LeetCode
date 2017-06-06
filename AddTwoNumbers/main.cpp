/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/6/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "solution.h"

using namespace std;

int main(int argc, char *argv[])
{
    ListNode* l11 = new ListNode(2);
    ListNode* l12 = new ListNode(4);
    l11->next = l12;
    ListNode* l13 = new ListNode(3);
    l12->next = l13;
    ListNode* l21 = new ListNode(5);
    ListNode* l22 = new ListNode(6);
    l21->next = l22;
    ListNode* l23 = new ListNode(4);
    l22->next = l23;
    Solution s;
    ListNode *result = s.addTwoNumbers(l11, l21);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    return 0;
}
