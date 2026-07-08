class Solution {
public:
   vector<int> deckRevealedIncreasing(vector<int>& deck) {
    int n = deck.size();
    sort(deck.begin(), deck.end());

    queue<int> idx;
    for (int i = 0; i < n; i++) idx.push(i);

    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        result[idx.front()] = deck[i];
        idx.pop();

        if (!idx.empty()) {
            idx.push(idx.front()); 
            idx.pop();
        }
    }

    return result;
}
};