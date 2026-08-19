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
    ListNode* reverseList(ListNode* head){
        ListNode* mover = head;
        ListNode* previous = nullptr;
         while(mover != nullptr){
            ListNode* temp = mover->next;
            mover->next = previous;
            previous = mover;
            mover = temp;
         }
         return previous;
    }
    void reorderList(ListNode* head) {
        ListNode* mover = head;
        //length of a list 
        int cnt =0;
        while(mover !=nullptr){
            cnt++;
            mover = mover->next;
        }
        if(cnt>2){
        int c = 1;
        mover = head;
        while(mover !=nullptr){
            if(c== cnt/2)break;
            c++;
            mover = mover->next;
        }
        //reversing second half
        mover = reverseList(mover->next);
        ListNode * first = head;

        cout << mover->val << endl;

        while(first != nullptr && first->next != mover){
            ListNode* tempFirst = first->next;
            ListNode* tempMover = mover->next;
            first->next = mover;
            mover->next = tempFirst;
            first = tempFirst;
            mover = tempMover;
        }
     }
    }
};
