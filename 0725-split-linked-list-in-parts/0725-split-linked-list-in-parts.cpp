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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode*ptr=head;
        while(ptr){
            n++;
            ptr=ptr->next;
        }
        ptr=head;
        vector<ListNode*>res;
        
        int nodes=n/k;
        int offset=n%k;
        
        while(ptr){
            res.push_back(ptr);
            ListNode*temp=ptr;
            int occ=1;
            while(occ<nodes){
                occ++;
                temp=temp->next;
            }
            if(offset && n>k){
                offset--;
                temp=temp->next;
            }
            ptr=temp->next;
            temp->next=NULL;
            
        }
        while(n<k){
            res.push_back(NULL);
            n++;
        }
        
       
        return res;
        
        
    }
};