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
    
    
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // ListNode*temp=new ListNode();
        // ListNode*p=temp;
        // while(list1!=NULL&&list2!=NULL){
        //     if(list1->val<list2->val){
        //         temp->next=new ListNode(list1->val);
        //         temp=temp->next;
        //         list1=list1->next;
        //     }
        //     else{
        //         temp->next=new ListNode(list2->val);
        //         temp=temp->next;
        //         list2=list2->next;
        //     }
        // }
        // while(list1!=NULL){
        //     temp->next=new ListNode(list1->val);
        //     list1=list1->next;
        //     temp=temp->next;
        // }
        // while(list2!=NULL){
        //     temp->next=new ListNode(list2->val);
        //     list2=list2->next;
        //     temp=temp->next;
        // }
        // return p->next;
        
//         ListNode*l1=list1,*l2=list2;
//         ListNode*res=new ListNode(0);
//         ListNode*ans=res;
//         while(l1 && l2){
//             if(l1->val<l2->val){
//                 res->next=new ListNode(l1->val);
//                 l1=l1->next;
//                 res=res->next;
//             }
//             else{
//                 res->next=new ListNode(l2->val);
//                 l2=l2->next;
//                 res=res->next;
//             }
//         }
//         while(l1){
//             res->next=new ListNode(l1->val);
//             l1=l1->next;
//             res=res->next;
//         }
//         while(l2){
//             res->next=new ListNode(l2->val);
//             l2=l2->next;
//             res=res->next;
//         }
//         return ans->next;
        
        
//         if(list1==NULL)return list2;
//         if(list2==NULL)return list1;
        
//         if(list1->val<list2->val){
//             list1->next=mergeTwoLists(list1->next,list2);
//             return list1;
//         }
        
//         list2->next=mergeTwoLists(list1,list2->next);
//         return list2;
        
//         if(list1==NULL)return list2;
//         if(list2==NULL)return list1;
        
//         ListNode*res=new ListNode(0);
//         ListNode*ans=res;
//         while(list1 && list2){
//             if(list1->val<list2->val){
//                 res->next=list1;
//                 list1=list1->next;
//             }
//             else{
//                 res->next=list2;
//                 list2=list2->next;
//             }
//             res=res->next;
//         }
        
//         while(list1){
//             res->next=list1;
//             list1=list1->next;
//             res=res->next;
//         }
        
//         while(list2){
//             res->next=list2;
//             list2=list2->next;
//             res=res->next;
//         }
        
        // return ans->next;

        if(!list1 && !list2)return NULL;
        if(!list1)return list2;
        if(!list2)return list1;
        
        if(list1->val<list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
    
         list2->next=mergeTwoLists(list1,list2->next);
        
        return list2;
        
    }
};