/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
//         Node*List=new Node(0);
//         Node*ptr=List;
//         Node*p=head;
//         unordered_map<Node*,Node*>m;
//         while(p!=NULL){
//             List->next=new Node(p->val);
            
//             List=List->next;
//             m[p]=List;            
//             p=p->next;
//         }
//         p=head;
//         List=ptr->next;
//         Node* count;
//         while(p!=NULL){
//             if(p->random==NULL){
//                 List->random=NULL;
//             p=p->next;
//             List=List->next;
//         }
//         else{
//             count=p->random;
            
//             List->random=m[count];
            
//             List=List->next;
//             p=p->next;
            
//         }
//         }
//         return ptr->next;
        
        Node*list=new Node(0);
        Node*p=head,*p1=list;
        unordered_map<Node*,Node*>map;
        while(p){
            list->next= new Node(p->val);
            list=list->next;
            map[p]=list;
            p=p->next;
        }
        p1=p1->next;
        list=p1;
        p=head;
        while(p){
           if(!p->random){
               p1->random=NULL;
               p=p->next;
               p1=p1->next;
           }
            else{
                Node*temp=p->random;
                p1->random=map[temp];
                p1=p1->next;
                p=p->next;
            }
        }
        return list;
    }
};