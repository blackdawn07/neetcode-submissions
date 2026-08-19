class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* mover = head;
        ListNode* previous = nullptr;

        while (mover != nullptr) {
            ListNode* temp = mover->next;

            mover->next = previous;
            previous = mover;
            mover = temp;
        }

        return previous;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next)
            return;

        // Find length
        int cnt = 0;
        ListNode* mover = head;

        while (mover != nullptr) {
            cnt++;
            mover = mover->next;
        }

        // Find end of first half
        mover = head;
        int c = 1;

        while (c < cnt / 2) {
            mover = mover->next;
            c++;
        }

        // Reverse second half
        ListNode* second = reverseList(mover->next);

        // Break the two halves
        mover->next = nullptr;

        // Merge
        ListNode* first = head;
        ListNode* tail = nullptr;

        while (first != nullptr && second != nullptr) {
            ListNode* tempFirst = first->next;
            ListNode* tempSecond = second->next;

            first->next = second;
            second->next = tempFirst;

            tail = second;

            first = tempFirst;
            second = tempSecond;
        }

        // For odd length, one node remains in second half
        if (second != nullptr) {
            tail->next = second;
        }
    }
};