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
    
    // ListNode*recur(ListNode*start,ListNode*end){
    //     ListNode*front=start,*ptr=start,*back=NULL;
    //     while(front!=end){
    //         front=front->next;
    //         ptr->next=back;
    //         back=ptr;
    //         ptr=front;
    //     }
    //     return back;
    // }
    
    ListNode*reverse(ListNode*st,ListNode*end){
        ListNode*forw=st,*curr=st,*prev=NULL;
            while(forw!=end){
                forw=forw->next;
                curr->next=prev;
                prev=curr;
                curr=forw;
                
            }
            // curr->next=prev;
            return prev;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        // ListNode*temp=head;
        // for(int i=0;i<k;i++){
        //     if(!temp){
        //         return head;
        //     }
        //     temp=temp->next;
        // }
        // ListNode*Nnode=recur(head,temp);
        // head->next=reverseKGroup(temp,k);
        // return Nnode;
        
        ListNode*list=head;
       
        for(int i=0;i<k;i++){
            if(list)
                list=list->next;
            else
                return head;
        }
        ListNode*nNode= reverse(head,list);
        head->next=reverseKGroup(list,k);
        return nNode;        
        
    }
};