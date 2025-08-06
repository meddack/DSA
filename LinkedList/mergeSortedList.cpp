#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};

int main() {
    // Create two lists: 1->2 and 1->3
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);

    Solution sol;
    ListNode* res = sol.mergeTwoLists(l1, l2);
    while (res) {
        cout << res->val << " ";  // Output: 1 1 2 3
        res = res->next;
    }
    return 0;
}
