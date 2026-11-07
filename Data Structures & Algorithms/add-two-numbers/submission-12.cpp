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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val =0;
        int val2 =0;
        ListNode* it1 = l1;
        ListNode* it2 = l2;
        ListNode dummy(0);
        ListNode* ans = &dummy;

        int carry = 0;
        while(it1 != nullptr || it2 != nullptr || carry != 0){
            val = 0;
            val += carry;
            carry = 0;
            if(it1 != nullptr){
                val += it1 -> val;
                it1= it1-> next;

            }
            if( it2 != nullptr){
                val += it2 -> val;
                it2= it2-> next;

            }
            if(val >= 10){
                val = val -10;
                carry ++;
            }
            ans->next = new ListNode(val);
            ans = ans ->next;


        }
        return dummy.next;

    }
};
