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
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        ListNode*dummy=new ListNode();
        ListNode*p=dummy;
        ListNode*ptr=head;
       
        int sum=0;

        dummy->next=head;
        unordered_map<int,ListNode*>map;
        map[0]=dummy;
        
        while(ptr){
            sum+=ptr->val;
            if(map.find(sum)!=map.end()){
                p=map[sum];
                
                ListNode*fix=p;
                
                while(p!=ptr){
                    p=p->next;
                    sum+=p->val;
                    if(p!=ptr)
                        map.erase(sum);
                }
                
                fix->next=p->next;
                fix=fix->next;
            }
            else
                map[sum]=ptr;                

            ptr=ptr->next;
        }
        
        return dummy->next;
    
    }
};