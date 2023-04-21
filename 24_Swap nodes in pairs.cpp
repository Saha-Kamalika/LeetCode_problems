class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* temp; 
        temp = head->next; 
        head->next = swapPairs(head->next->next); // changing links
        temp->next = head; 
        return temp;
    }
};
