//         s1.pop();
//     }
// }
int peek() {
if(s2.empty()){
while(s1.size()){
s2.push(s1.top());
s1.pop();
}
}
return s2.top();
}
bool empty() {
if(s1.size() || s2.size())return false;
return true;
}
};
​
/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue* obj = new MyQueue();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->peek();
* bool param_4 = obj->empty();
*/