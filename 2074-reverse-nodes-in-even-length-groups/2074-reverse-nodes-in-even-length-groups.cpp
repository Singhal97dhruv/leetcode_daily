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
    ListNode*reverse(ListNode*start,ListNode*end){
        ListNode*st=start,*last=NULL,*ptr=start;
        while(st!=end){
            st=st->next;
            ptr->next=last;
            last=ptr;
            ptr=st;
        }
        return last;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head,int k=1) {
        
        ListNode*node=head,*prev;
        for(int i=0;i<k;i++){
            if(!node){
                if(i%2==0){
                    return reverse(head,NULL);
                }
                return head;
            }
            prev=node;
            node=node->next;
        }
        if(k%2!=0){
         prev->next= reverseEvenLengthGroups(node,k+1);
            return head;
        }
        ListNode*nNode=reverse(head,node);
        head->next=reverseEvenLengthGroups(node,k+1);
        return nNode;
        
    }
};