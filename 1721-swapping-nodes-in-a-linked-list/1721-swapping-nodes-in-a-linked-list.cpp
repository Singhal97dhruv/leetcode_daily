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
    ListNode* swapNodes(ListNode* head, int k) {
        // ListNode*ptr=head;
        // int count=0;
        // stack<ListNode*>s;
        // while(ptr!=NULL){
        //     s.push(ptr);
        //     count++;
        //     ptr=ptr->next;
        // }
        // if(k>count/2){
        //     k=count-k+1;
        // }
        // ListNode*p=head;
        // for(int i=1;i<k;i++){
        //     p=p->next;
        //     s.pop();
        // }
        // int tmp=s.top()->val;
        // s.top()->val=p->val;
        // p->val=tmp;
        // return head;
        
        
        int n=0;
        ListNode*temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        
        ListNode*fromFront,*fromEnd;
        temp=head;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        fromFront=temp;
        temp=head;
        for(int i=0;i<n-k;i++){
            temp=temp->next;
        }
        fromEnd=temp;
        swap(fromEnd->val,fromFront->val);
        return head;
        
        
        
    }
};