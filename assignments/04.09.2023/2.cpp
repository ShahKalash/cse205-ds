/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *final;
        int sum, carry;
        sum = l1->val + l2->val;
        carry = sum / 10;
        sum %= 10;
        final = new ListNode(sum);
        ListNode *ans = final;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 && l2)
        {
            sum = l1->val + l2->val + carry;
            int sum1 = sum % 10;
            final->next = new ListNode(sum1);
            carry = sum / 10;
            cout << carry << endl;
            final = final->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            sum = l1->val + carry;
            int sum1 = sum % 10;
            final->next = new ListNode(sum1);
            carry = sum / 10;
            final = final->next;
            l1 = l1->next;
        }
        while (l2)
        {
            sum = l2->val + carry;
            int sum1 = sum % 10;
            final->next = new ListNode(sum1);
            carry = sum / 10;
            final = final->next;
            l2 = l2->next;
        }
        if (carry)
            final->next = new ListNode(carry);
        return ans;
    }
};