#include <vector>
#include <stack>

using namespace std;
class MinStack {
public:
    vector<int> arr;
    int size;
    stack<int> mins_seen;

    MinStack() {
        size = 0;
    }
    
    void push(int val) {
        arr.push_back(val);
        size++;
        // add if mins_seen stack has nothing or if we found a new min
        if (mins_seen.empty() || val <= mins_seen.top()) 
        {
            mins_seen.push(val);
        }

        
    }
    
    void pop() {
        if (arr[size-1] == mins_seen.top())
        {
            mins_seen.pop();
        }
        arr.pop_back();
        size--;
    }
    
    int top() {
        return arr[size-1];
    }
    
    int getMin() {
        return mins_seen.top();
        
    }
};
