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
        // ListNode* temp1 = l1;
        // ListNode* temp2 = l2;
        // ListNode* new_head = new ListNode(-1);
        // ListNode* temp3 = new_head;
        // int carry = 0;
        // while(temp1!= NULL && temp2!=NULL)
        // {
        //     int x = temp1->val + temp2->val+ carry;
        //     if(x<=9)
        //     {
        //         carry = 0;
        //         ListNode* node = new ListNode(x);
        //         temp3->next = node;
        //         temp3 = temp3->next;
        //     }
        //     else
        //     {
        //         carry = 1;
        //         x=x%10;
        //         ListNode* node = new ListNode(x);
        //         temp3->next = node;
        //         temp3 = temp3->next;
        //     }
        //     temp1 = temp1->next;
        //     temp2 = temp2->next;
        // }
        // while(temp1!=NULL)
        // {
        //     int x = temp1->val + carry;
        //     if(x<=9)
        //     {
        //         carry = 0;
        //         ListNode* node = new ListNode(x);
        //         temp3->next = node;
        //         temp3 = temp3->next;
        //     }
        //     else
        //     {
        //         carry = 1;
        //         x=x%10;
        //         ListNode* node = new ListNode(x);
        //         temp3->next = node;
        //         temp3 = temp3->next;
        //     }
        //     temp1 = temp1->next;
        // }
        // while(temp2!=NULL)
        // {
        //     int x = temp2->val + carry;
        //     if(x<=9)
        //     {
        //         carry = 0;
        //         ListNode* node = new ListNode(x);
        //         temp3->next = node;
        //         temp3 = temp3->next;
        //     }
        //     else
        //     {
        //         carry = 1;
        //         x=x%10;
        //         ListNode* node = new ListNode(x);
        //         temp3->next = node;
        //         temp3 = temp3->next;
        //     }
        //     temp2 = temp2->next;
        // }
        // if(carry ==1)
        // {
        //     ListNode* node = new ListNode(1);
        //     temp3->next = node;
        //     temp3 = temp3->next;
        // }
        // return new_head->next;
        
        
//         ListNode*f=l1,*s=l2;
//         ListNode*third=new ListNode(0);
//         ListNode*res=third;
//         int carry=0;
//         while(f && s){
//             int val= f->val+s->val+carry;
//             f=f->next;s=s->next;
//             carry=val>9?1:0;
//             third->next=new ListNode(val%10);
//             third=third->next;
//         }
//         while(f){
//             int val=f->val+carry;
//             f=f->next;
//             carry=val>9?1:0;
//             third->next=new ListNode(val%10);
//             third=third->next;
//         }
//         while(s){
//             int val=s->val+carry;
//             s=s->next;
//             carry=val>9?1:0;
//              third->next=new ListNode(val%10);
//             third=third->next;
//         }
//         if(carry)third->next=new ListNode(1);
//         return res->next;
        
        
     if(!l1 && !l2)return NULL;
        if(!l1)return l2;
        if(!l2)return l1;
        
        int sum=l1->val+l2->val;
        ListNode*p=new ListNode(sum%10);
        int carry=sum/10;
        p->next=addTwoNumbers(l1->next,l2->next);
        if(carry){
            p->next=addTwoNumbers(p->next,new ListNode(carry));
        }
        return p;
        
    }
};