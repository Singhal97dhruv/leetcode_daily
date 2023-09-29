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
    ListNode* middleNode(ListNode* head) {
        
       // int n=0;
       //  ListNode*root=head;
       //  while(root){
       //      n++;
       //      root=root->next;
       //  }
       //  root=head;
       //  for(int i=0;i<n/2;i++){
       //      root=root->next;
       //  }
       //  return root;
        
        
        int n=0;
        ListNode*ptr=head;
        while(ptr){
            n++;
            ptr=ptr->next;
        }
        ptr=head;
        for(int i=0;i<n/2;i++){
            ptr=ptr->next;
            
        }
        return ptr;
        
        
    }
};