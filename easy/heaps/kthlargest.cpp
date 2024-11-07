/*
Using maxheap to find kth largest in a list/stream
*/


#include <queue>
#include <string>
using namespace std;

#include <queue>


using namespace std;
class KthLargest {
public:
    int size_ = 0;
    int k_;
    priority_queue<int>* pq; // default is maxheap

    KthLargest(int k, vector<int>& nums) {
        k_ = k;
        pq = new priority_queue<int>;
        for (int i = 0; i < nums.size(); ++i)
        {
            pq->push(nums[i]);
            size_++;
        }
    }
    
    int add(int val) {
        pq->push(val);
        size_++;
        priority_queue<int> dupe = *pq;
        int count = 0;
        while (count < k_-1)
        {
            dupe.pop();
            count++;
        }
        return dupe.top();
    }
};
