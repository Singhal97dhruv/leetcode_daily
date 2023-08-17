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
    ListNode* rotateRight(ListNode* head, int k) {
//         if(!head)return head;
//         int count=0;
//         // if(k==0)return head;
//         ListNode*ptr=head;
//         while(ptr!=NULL){
//             count++;
//             ptr=ptr->next;
//         }
//         int temp=count-(k%count);
//         ptr=head;
//         if(temp==count)return head;
    
//         while(temp>1){
//             ptr=ptr->next;
//             temp--;
//         }
//         ListNode*p=ptr->next;
//         ptr->next=NULL;
//         ListNode*tmp=p;
//         while(p->next!=NULL){
//             p=p->next;
//         }
//         p->next=head;
//         return tmp;
        
//         if(!head || !head->next)return head;
        
//         int nodes=0;
//         ListNode*ptr=head;
//         while(ptr){
//             ptr=ptr->next;
//             nodes++;
//         }
//         k=k%nodes;
//         if(k==0)return head;
//         ptr=head;
//         for(int i=0;i<nodes-k-1;i++){
//             ptr=ptr->next;
//         }
//         ListNode*newHead=ptr->next;
//         ptr->next=NULL;
//         ptr=newHead;
//         while(ptr->next){
//             ptr=ptr->next;
//         }
//         ptr->next=head;
//         return newHead;
        
        if(!head || !head->next)return head;
        int n=0;
        ListNode*h=head;
        while(h){
            n++;
            h=h->next;
        }
        
        k=k%n;
        if(k==0)return head;
        h=head;
        for(int i=0;i<n-k-1;i++){
            h=h->next;
        }
        ListNode*ans=h->next;
        h->next=NULL;
        h=ans;
        while(h->next){
            h=h->next;
        }
        h->next=head;
        return ans;
    }
};