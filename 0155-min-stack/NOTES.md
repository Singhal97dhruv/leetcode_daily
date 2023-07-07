}
else{
Node*ptr=new Node(val,head,min(head->min_ele,val));
head=ptr;
}
}
void pop() {
head=head->next;
}
int top() {
return head->data;
}
int getMin() {
return head->min_ele;
}
};
​
/**
* Your MinStack object will be instantiated and called as such:
* MinStack* obj = new MinStack();
* obj->push(val);
* obj->pop();
* int param_3 = obj->top();
* int param_4 = obj->getMin();
*/