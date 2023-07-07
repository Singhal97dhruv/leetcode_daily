class MyStack {
public:
queue<int>q;
int high=-1;
MyStack() {
}
void push(int x) {
q.push(x);
high=x;
}
int pop() {
int n=q.size();
while(n>1){
int x=q.front();
q.pop();
q.push(x);
high=x;
n--;
}
int x=q.front();
q.pop();
return x;
}
int top() {
return high;
}
bool empty() {
if(q.size())return false;
return true;
}
};
​
/**
* Your MyStack object will be instantiated and called as such:
* MyStack* obj = new MyStack();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->top();
* bool param_4 = obj->empty();
*/