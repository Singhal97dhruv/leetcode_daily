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
    bool isPalindrome(ListNode* head) {
        // vector<int>temp;
        // while(head){
        //     temp.push_back(head->val);
        //     head=head->next;
        // }
        // int n=temp.size();
        // for(int i=0;i<n/2;i++){
        //     if(temp[i]!=temp[n-i-1])return false;
        // }
        // return true;
        
        ListNode*slow=head,*fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*prev=slow;
        slow=slow->next;
        prev->next=NULL;
        while(slow){
            ListNode*temp=prev;
            prev=slow;
            slow=slow->next;
            prev->next=temp;
            
        }
        while(head && prev){
            if(head->val!=prev->val)return false;
            head=head->next;
            prev=prev->next;
        }
        return true;
        
    }
};