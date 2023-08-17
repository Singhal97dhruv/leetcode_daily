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
    ListNode* partition(ListNode* head, int x) {
        
//         ListNode*p1=new ListNode(0);
//         ListNode*p2=new ListNode(0);
//         ListNode*p3=p2,*p4=p1;
//         while(head){
//             if(head->val<x){
//                 p1->next=head;
//                 p1=p1->next;
                
//             }
//             else {
//                 p2->next=head;
//                 p2=p2->next;
                
//             }
//             head=head->next;
//         }
//         p1->next=p3->next;
//         p2->next=NULL;
//         return p4->next;
        
        ListNode*p1=new ListNode(0),*p2=new ListNode(0),*p3=p1,*p4=p2;
        while(head){
            if(head->val<x){
                p1->next=new ListNode(head->val);
                p1=p1->next;
            }
            else{
                p2->next=new ListNode(head->val);
                p2=p2->next;
            }
            head=head->next;
        }
        p1->next=p4->next;
        return p3->next;
        
        
    }
};