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
    ListNode* reverseList(ListNode* head) {
     
        // ListNode*dummy=new ListNode(0);
        // dummy->next=head;
        // ListNode*pre=dummy,*cur=pre->next;
        // while(cur && cur->next){
        //     ListNode*forw=cur->next;
        //     cur->next=forw->next;
        //     forw->next=pre->next;
        //     pre->next=forw;
        // }
        // return dummy->next;
        
        
        ListNode*prev=NULL,*f=head,*curr=head;
        while(f){
            if(f->next){
                curr=f;
                f=f->next;
                curr->next=prev;
                prev=curr;
                curr=f;
            }
            else{
                curr->next=prev;
                break;
            }
        }
        
        return f;
        
        
    }
};