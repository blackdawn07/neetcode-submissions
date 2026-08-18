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
    void reorderList(ListNode* head) {
        ListNode* mover = head;
        vector<ListNode*> v;

        while(mover!=nullptr){
            v.push_back(mover);
            mover = mover->next;
        }
        int i = 0 , j = v.size()-1;
        ListNode* previous = nullptr;
        while(i<j){
            if(i==0){
             previous = v[i];
             previous->next = v[j];
            }
            else{
             previous->next = v[i];
             previous->next->next = v[j];
             previous = previous->next;
            }
            previous = previous->next;
             i++;j--;
        }
        if(i==j && i !=0){
            previous->next = v[i]; 
            previous = previous->next;
        }
        if(i!=0)
        previous->next = nullptr;
    }
};
