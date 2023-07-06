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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     
//         ListNode*curr=head,*right=head;
//         int oc=-n;
//         if(head->next==NULL)return NULL;
//         while(curr!=NULL){
//             if(oc>0)right=right->next;
//             curr=curr->next;
//             oc++;
//         }
// if(right==head&&oc==0)return right->next;        
//         right->next=right->next->next;
//         return head;

        
        int cnt=0;
        ListNode*ptr=head;
        while(ptr){
            cnt++;
            ptr=ptr->next;
        }
        
        int pos=cnt-n;
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ptr=dummy;
        for(int i=0;i<pos;i++){
            ptr=ptr->next;
        }
        
        ListNode*nxt=ptr->next;
        if(nxt->next){
            ptr->next=nxt->next;
            nxt=nullptr;
        }
        else{
            ptr->next=nullptr;
            nxt=NULL;
        }
        return dummy->next;
        
    }    
};