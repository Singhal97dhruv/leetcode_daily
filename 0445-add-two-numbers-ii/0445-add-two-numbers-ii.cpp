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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         stack<int>st1,st2;
//         ListNode*ptr=NULL;
//         // ListNode*p=ptr;
//         int carry=0;
//         while(l1){
//             st1.push(l1->val);
//             l1=l1->next;
//         }
//         while(l2){
//             st2.push(l2->val);
//             l2=l2->next;
//         }
//         while(st1.size()|| st2.size()|| carry){
//             int sum=carry;
//             if(st1.size()){
//                 sum+=st1.top();
//                 st1.pop();
//             }
//             if(st2.size()){
//                 sum+=st2.top();
//                 st2.pop();
//             }
//             carry=sum/10;
//             ListNode*temp=new ListNode(sum%10);
//             temp->next=ptr;
//             ptr=temp;
//         }
        
        
        // return ptr;
       
        ListNode*res=NULL;
        stack<ListNode*>stk1,stk2;
        int carry=0;
        ListNode*p=l1;
        while(p)
        {
            stk1.push(p);p=p->next;
        }
        p=l2;
        while(p)
        {
            stk2.push(p);p=p->next;
        }
        
        
        while(!stk1.empty() && !stk2.empty()){
            int sum=stk1.top()->val+stk2.top()->val+carry;stk1.pop();stk2.pop();
            ListNode*ptr=new ListNode(sum%10);
            ptr->next=res;
            res=ptr;
            carry=sum/10;
        }
        
        while(!stk1.empty()){
            int sum=stk1.top()->val+carry;stk1.pop();
            carry=sum/10;
            ListNode*ptr=new ListNode(sum%10);
            ptr->next=res;
            res=ptr;
            
        }
        while(!stk2.empty()){
            int sum=stk2.top()->val+carry;stk2.pop();
            carry=sum/10;
            ListNode*ptr=new ListNode(sum%10);
            ptr->next=res;
            res=ptr;
            
        }
      if(carry){
          ListNode*ptr=new ListNode(1);
          ptr->next=res;
          res=ptr;
      }
        return res;
        
    }
};