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
    int nodeCount(ListNode* head){
        ListNode* mover = head;
        int c = 0;
        while(mover!=nullptr){
            c++;
          mover= mover->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int listLen =  nodeCount(head);
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
          if(listLen == n)break;
          listLen--;
          prev = temp;
          temp = temp->next;
        }
        if(prev==nullptr)return  head->next;
        prev->next = temp->next;
        delete temp;
        return head;
    
    }
};
