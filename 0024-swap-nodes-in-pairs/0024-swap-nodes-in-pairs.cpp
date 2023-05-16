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
    ListNode* swapPairs(ListNode* head) {
 //        ListNode*p=new ListNode();
 //        ListNode*temp=p;
 // ListNode*tmp;
 //        while(head!=NULL){
 //            tmp=head;
 //            head=head->next;
 //            if(head)
 //            {p->next=new ListNode(head->val);
 //            p=p->next;
 //            head=head->next;
 //            }
 //            p->next=new ListNode(tmp->val);
 //            p=p->next;
 //        }
 //        return temp->next;
        if(!head || !head->next)return head;
        ListNode*dummyNode=new ListNode();
        ListNode*ptr=dummyNode;
        ListNode*curr=head;
        while(curr && curr->next){
            ptr->next=curr->next;
            curr->next=ptr->next->next;
            ptr->next->next=curr;
            ptr=curr;
            curr=curr->next;
        }
        return dummyNode->next;
    }
};