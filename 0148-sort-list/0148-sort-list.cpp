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
    
    ListNode*merge(ListNode*l1,ListNode*l2){
        ListNode*temp=new ListNode(0);
        ListNode*res=temp;
        while(l1 && l2){
            if(l1->val<l2->val){
                res->next=l1;
                l1=l1->next;
                res=res->next;
            }
            else{
                res->next= l2;
                l2=l2->next;
                res=res->next;
            }
        }
        while(l1){
            res->next=l1;
            l1=l1->next;
            res=res->next;
        }
        while(l2){
            res->next= l2;
            l2=l2->next;
            res=res->next;
        }
        return temp->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)return head;
//         vector<int>vect;
//         while(head!=NULL){
//             vect.push_back(head->val);
//             head=head->next;
//         }
        
//         sort(vect.begin(),vect.end());
//         ListNode*ref=new ListNode();
//         ListNode*temp=ref;
//         for(int x: vect){
//             // temp->val=x;
//             temp->next=new ListNode(x);
//             temp=temp->next;
//         }
//         // free(temp);
//         return ref->next;
        
        ListNode*ref=NULL;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            ref=slow;
            slow=slow->next;

        }
        ref->next=NULL;
       ListNode*l1= sortList(head);
       ListNode*l2= sortList(slow);
        return merge(l1,l2);
    }
};