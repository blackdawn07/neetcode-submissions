class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.empty())
            return nullptr;

        int interval = 1;
        int n = lists.size();

        while (interval < n) {

            for (int i = 0; i + interval < n; i += interval * 2) {

                lists[i] = mergeTwoList(
                    lists[i],
                    lists[i + interval]
                );
            }

            interval *= 2;
        }

        return lists[0];
    }

private:

    ListNode* mergeTwoList(ListNode* head1, ListNode* head2) {

        ListNode* l1 = head1;
        ListNode* l2 = head2;
        ListNode* prev = nullptr;

        while (l1 != nullptr && l2 != nullptr) {

            int v1 = l1->val;
            int v2 = l2->val;

            if (v1 > v2) {

                ListNode* temp = l2;
                l2 = l2->next;

                temp->next = l1;

                if (prev != nullptr)
                    prev->next = temp;
                else
                    head1 = temp;

                prev = temp;
            }
            else {
                prev = l1;
                l1 = l1->next;
            }
        }

        if (l2 != nullptr) {
            if (prev == nullptr)
                head1 = l2;
            else
                prev->next = l2;
        }

        return head1;
    }
};
