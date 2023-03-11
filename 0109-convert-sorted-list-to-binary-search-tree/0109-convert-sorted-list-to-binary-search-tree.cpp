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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return make(head,NULL);
    }
    TreeNode*make(ListNode*start,ListNode*end){
        if(start==end)return NULL;
        if(start->next==end)return new TreeNode(start->val);
        ListNode*f1=start,*f2=start;
        while(f2!=end && f2->next!=end){
            f1=f1->next;
            f2=f2->next->next;
        }
        TreeNode*t=new TreeNode(f1->val);
        t->left=make(start,f1);
        t->right=make(f1->next,end);
        return t;
    }
};