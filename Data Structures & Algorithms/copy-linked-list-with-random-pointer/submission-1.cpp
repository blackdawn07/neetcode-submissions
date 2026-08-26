/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head){
        if(head==nullptr)return nullptr;
        unordered_map<Node*,Node*> mp;
        Node* temp = head;
        Node* newHead = new Node(temp->val);
        Node* prev = newHead;
        mp[temp]= newHead;
        temp = temp->next;
        while(temp!=nullptr){
            Node* newNode = new Node(temp->val);
            prev->next = newNode;
            prev = newNode;
            mp[temp] = newNode;
            temp = temp->next;
        }
        temp = head;
        prev = newHead;

        while(temp!= nullptr){
            prev->random = mp[temp->random];
            prev = prev->next;
            temp = temp->next;
        }
        return newHead;
        
    }
};
