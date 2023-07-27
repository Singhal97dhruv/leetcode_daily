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
    ListNode* oddEvenList(ListNode* head) {
//         if(!head)return head;
//         ListNode*odd=head,*even=head->next;
//         ListNode *second=even;
       
//         while(even && even->next){
//             odd->next=even->next;
//             odd=odd->next;
//             even->next=odd->next;
//             even=even->next;
//         }
//         odd->next=second;
//         return head;
        
        if(!head)return head;
        ListNode*odd=head,*even=head->next;
        ListNode*joiner=even;
        while(even && even->next){
            odd->next=even->next;
            even->next=odd->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=joiner;
        return head;
    }
};