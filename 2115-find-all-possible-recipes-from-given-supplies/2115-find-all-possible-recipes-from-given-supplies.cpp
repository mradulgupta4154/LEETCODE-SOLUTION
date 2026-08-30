class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        vector<bool> vec(recipes.size(), false);
        unordered_set<string> available(supplies.begin(), supplies.end());
        bool progress = true;

        while (progress) {
            progress = false;
            for (int i = 0; i < recipes.size(); i++) {
                if (vec[i]) continue; 
                bool can = true;
                for (int j = 0; j < ingredients[i].size(); j++) {
                    if (available.find(ingredients[i][j]) == available.end()) {
                        can = false;
                        break;
                    }
                }
                if (can) {
                    vec[i] = true;
                    available.insert(recipes[i]);
                    progress = true;
                }
            }
        }

        vector<string> ans;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i]) ans.push_back(recipes[i]);
        }
        return ans;
    }
};