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
    void reorderList(ListNode* head) {
        if((!head)||(!head->next)||(!head->next->next))return;
//         stack<ListNode*>st;
//         ListNode*p=head;
//         int size=0;
//         while(p){
//             st.push(p);
//             size++;
//             p=p->next;
//         }
//         p=head;
//         for(int i=0;i<size/2;i++){
//             ListNode*ele=st.top();
//             ele->next=p->next;
//             p->next=ele;
            
//             // p->next=st.top();
//             st.pop();
//             p=p->next->next;
//         }
//         p->next=NULL;
        
        int len=0;
        ListNode*ptr=head;
        stack<ListNode*>st;
        while(ptr){
            len++;
            st.push(ptr);
            ptr=ptr->next;
        }
        
        
        
        ListNode* p=head;

        for(int i=0;i<len/2;i++){
            ListNode*e=st.top();
            st.pop();
            e->next=p->next;
            p->next=e;
            p=p->next->next;
        }
        p->next=NULL;
        
        
        
        
    }
};