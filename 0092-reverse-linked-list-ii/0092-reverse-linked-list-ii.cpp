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
    
        // ListNode*dummy=new ListNode(0);
        // dummy->next=head;
        // ListNode*prev=dummy;
        // for(int i=0;i<left-1;i++){
        //     prev=prev->next;
        // }
        // ListNode*curr=prev->next;
        // for(int i=0;i<right-left;i++){
        //     ListNode*forw=curr->next;
        //     curr->next=forw->next;
        //     forw->next=prev->next;
        //     prev->next=forw;
        // }
        // return dummy->next;
        
        
        ListNode*lft=new ListNode(0);
        ListNode*ans=lft;
        lft->next=head;
//         while(lft && lft->next->val!=left)lft=lft->next;
        
//         ListNode*rgt=lft->next;
//         while(rgt && rgt->val!=right)rgt=rgt->next;
        
//         ListNode*forw=lft->next;
//         while(forw!=rgt){
//             ListNode*ptr=forw;
//             forw=forw->next;
//             ptr->next=lft;
//             lft=ptr;
//         }
        
        for(int i=0;i<left-1;i++){
            lft=lft->next;
        }
        ListNode*curr=lft->next;
        for(int i=left;i<right;i++){
            ListNode*forw=curr->next;
            curr->next=forw->next;
            forw->next=lft->next;
            lft->next=forw;
        }
        
        return ans->next;
        
        
    }
    
};