class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || k == 1)
            return head;

        // Find till which node reverse needs to happen
        int c = 0;
        int targetNode = 0;

        ListNode* temp = head;

        while (temp != nullptr) {
            c++;

            if (c % k == 0)
                targetNode = c;

            temp = temp->next;
        }

        c = 0;
        temp = head;

        ListNode* prev = nullptr;

        // Tail of previous reversed group
        ListNode* tail = nullptr;

        // Original head of current group.
        // After reversal, it becomes the tail.
        ListNode* tail2 = nullptr;

        // Reversing
        while (temp != nullptr) {

            c++;

            if (c > targetNode)
                break;

            ListNode* curr = temp;
            temp = temp->next;

            // Original head of every k-group
            if ((c - 1) % k == 0)
                tail2 = curr;

            // Reverse
            curr->next = prev;
            prev = curr;

            // k nodes completed
            if (c % k == 0) {

                // First group
                if (c == k) {
                    head = curr;
                }
                else {
                    // Connect previous group's tail
                    tail->next = curr;
                }

                // Original head is now the tail
                tail = tail2;

                // Prepare for next group
                tail2 = nullptr;
                prev = nullptr;
            }
        }

        // Attach remaining nodes (< k)
        if (tail != nullptr)
            tail->next = temp;

        return head;
    }
};