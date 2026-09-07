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
    ListNode* middleNode(ListNode* head) {
        #define Node ListNode
        #define ed endl
        #define null NULL

        if(head == null ){ 
            return null;
        }
        // if(head->next == null){
        //     return null;
        // }

        Node* slow = head ;
        Node* fast = head ;
        
        while(fast != null && fast->next != null){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};