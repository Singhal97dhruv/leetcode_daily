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
    ListNode* deleteDuplicates(ListNode* head) {
//         ListNode*ref=new ListNode();
//         ListNode*p=ref;
//         while(head!=NULL){
//           // while(head!=NULL){
//               if(head->next!=NULL&&head->val==head->next->val){
//                   while(head->next!=NULL && head->val==head->next->val){
//                       head=head->next;
//                   }
//               }
//               else{
//                   ref->next=new ListNode(head->val);
//                   ref=ref->next;
//               }
//               head=head->next;
//           }
        
//         return p->next;
        
       ListNode*slow=new ListNode(0),*fast=head,*ans=slow;
        while(fast){
            
            if(fast->next && fast->val==fast->next->val  ){
                while(fast->next && fast->val==fast->next->val){
                    fast=fast->next;
                }
                fast=fast->next;
            }
            else{
                slow->next=new ListNode(fast->val);
                slow=slow->next;
                fast=fast->next;
            }
        }
        
        return ans->next;
    }
};