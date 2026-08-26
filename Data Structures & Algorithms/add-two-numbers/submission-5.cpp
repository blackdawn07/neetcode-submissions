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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev = nullptr;
        int carry = 0;

        while(temp1 != nullptr || temp2 != nullptr){
            int sum =0;
            if(temp1==nullptr)sum = temp2->val+carry;
            else if(temp2==nullptr)sum = temp1->val+carry;
            else sum = temp1->val+temp2->val+carry;

             carry =0;
             if(sum/10 != 0){
                 int r = sum%10;
                 carry = sum/10;
                 sum = r;
             }
             if(temp1==nullptr){
               prev->next = new ListNode(sum);
               prev = prev->next;
               temp2 = temp2->next;
             }
             else{
             temp1->val = sum;
             prev = temp1;
             temp1 = temp1->next;
             if(temp2!=nullptr)
              temp2 = temp2->next;
             }
        }
        if(carry !=0){
            prev->next = new ListNode(carry);
        }
      
        return l1;
    }
};
