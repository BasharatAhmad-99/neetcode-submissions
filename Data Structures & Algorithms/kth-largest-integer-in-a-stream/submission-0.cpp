class KthLargest {
private:
    int k;
    priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            add(num);   // reuse the same logic
        }
    }
    
    int add(int val) {
        if (minHeap.size() < k) {
            minHeap.push(val);
        } else if (val > minHeap.top()) {
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }
};