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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* it = head;
    int counter= 0;
    queue<ListNode*> temp;

    while( it != nullptr ){
        counter++;
        it = it -> next;
    }
    int x = 0;
    it = head;
    while (it!=  nullptr){
   

        if(x > counter - n ){
                temp.push(it);
            }
         x++;
        it = it -> next;
    }
    it = head;
    x =0;
    if( counter == n ){
        return head->next;
    }
    while (it !=  nullptr){
        
        if(x == (counter - n)-1){
            if(!(temp.empty())){
                it-> next = temp.front();
                temp.pop();
            }else{
                it -> next = nullptr;
            }
            break;
        }
        it = it -> next;
        x++;

    }


    return head;
    }
};
