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
    ListNode* removeElements(ListNode* head, int val) {
        #define Node ListNode
        #define ed endl
        #define null NULL

        Node* curr = head;
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;
        while( curr != null){
            
            if( curr->val == val){
               
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};