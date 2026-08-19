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

          while (c < (cnt + 1) / 2) {
            mover = mover->next;
            c++;
        }

        // Reverse second half
        ListNode* second = reverseList(mover->next);

        // Break the connection
        mover->next = nullptr;

        // Merge two halves
        ListNode* first = head;

        while (second != nullptr) {
            ListNode* tempFirst = first->next;
            ListNode* tempSecond = second->next;

            first->next = second;
            second->next = tempFirst;

            first = tempFirst;
            second = tempSecond;
        }
    }
};