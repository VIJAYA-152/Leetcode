class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    priority_queue<pair<int, char>> maxHeap;
    for (auto& p : freq) {
        maxHeap.push({p.second, p.first});
    }
    string result;
    while (!maxHeap.empty()) {
        int count = maxHeap.top().first;
        char ch = maxHeap.top().second;
        maxHeap.pop();
        result.append(count, ch);
    }

    return result;
}

};