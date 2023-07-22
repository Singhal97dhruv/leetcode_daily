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
    
//     ListNode* mergeTwoSortedLists(ListNode* l1,ListNode* l2){
//         if(l1==NULL)return l2;
//         else if(l2==NULL)return l1;
//         if(l1->val<l2->val){
//              l1->next=mergeTwoSortedLists(l1->next,l2);
//             return l1;
//         }

//         l2->next=mergeTwoSortedLists(l1,l2->next);
//         return l2;
//     }
    
    
  ListNode*mergeTwoSortedLists(ListNode*l1,ListNode*l2){
      if(!l1)return l2;
      if(!l2)return l1;
      
      if(l1->val<l2->val){
          l1->next=mergeTwoSortedLists(l1->next,l2);
        return l1;    
      }
      l2->next=mergeTwoSortedLists(l1,l2->next);
      return l2;
      
  }
    
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
//         priority_queue<int>q;
//         for(int i=0;i<lists.size();i++){
//             while(lists[i]!=NULL){
//                 q.push(lists[i]->val);
//                 lists[i]=lists[i]->next;
//             }
//         }
//         // if(q.empty())return NULL;
//         if(q.size()==0){
//             return NULL;
//         }
        
        
//         ListNode*curr;
        
//         ListNode*ptr;
//         while(!q.empty()){
//             ptr=new ListNode();
//             ptr->val=q.top();
//             ptr->next=curr;
//             curr=ptr;
//             q.pop();
//         }
//         return curr;
        
        // int n=lists.size();
        // if(n==0)return NULL;
        // while(n>1){
        //     for(int i=0;i<n/2;i++){
        //         lists[i]=mergeTwoSortedLists(lists[i],lists[n-i-1]);
        //     }
        //     n=(n+1)/2;
        // }
        // return lists.front();
        
        
//         int n =lists.size();
//         if(n==0)return NULL;
//         while(n>1){
//             for(int i=0;i<n/2;i++){
//                 lists[i]=mergeTwoSortedLists(lists[i],lists[n-i-1]);
//             }
//             n=(n+1)/2;
//         }
        
//         return lists.front();
        
        int n=lists.size();
        if (n==0)return NULL;
        while(n>1){
            for(int i=0;i<n/2;i++){
                lists[i]=mergeTwoSortedLists(lists[i],lists[n-i-1]);
                
            }
            n=(n+1)/2;
        }
        return lists.front();
    }
};