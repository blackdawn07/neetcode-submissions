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
    // int nodeCount(ListNode* head){
    //     ListNode* mover = head;
    //     int c = 0;
    //     while(mover!=nullptr){
    //         c++;
    //       mover= mover->next;
    //     }
    //     return c;
    // }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       // int listLen =  nodeCount(head);
        if(head->next == nullptr)return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        for(int i =1 ; i<n ; i++)fast = fast->next;
        while(fast->next != nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        //cout << fast->val << " " << slow->val << endl;
        if(prev== nullptr)return head->next;
        prev->next = slow->next;
        delete slow;
        return head;
    }
};
