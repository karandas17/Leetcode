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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        #define Node ListNode
        #define ed endl
        #define null NULL

        if( head == null)
            return null;
        if(left == right)
            return head;
        
        Node* t = head;
        Node* before = null;
        int pos = 1;
        while(t!= null){
            if(pos<left){
                before = t;
                t= t->next;
                pos++;
                continue;
            }
            Node* curr = t;
            Node* prev = null;
            int times = right - left + 1;
            while(times--){
                Node* nex = curr->next;
                curr->next = prev;
                prev = curr;
                curr =  nex ;
            }
            t->next = curr;
            if(before==null){
                return prev;
            }
            before->next = prev; 
            return head;
            
        }
        return head;
    }
};