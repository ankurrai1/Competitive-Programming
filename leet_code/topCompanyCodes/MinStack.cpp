// task is to implement minimum stack;

#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stk;
    vector<int> minUpto;
    int t = -1;
    
    MinStack() {    
    }
    
    void push(int val) {
        stk.push_back(val);
        if(t >= 0 && minUpto[t] <= val) minUpto.push_back(minUpto[t]);
        else minUpto.push_back(val);
        t++;
    }
    
    void pop() {
        if(t >= 0){
            stk.pop_back();
            minUpto.pop_back();
            t--;
        }
    }
    
    int top() {
       return stk[t]; 
    }
    
    int getMin() {
        return minUpto[t];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */