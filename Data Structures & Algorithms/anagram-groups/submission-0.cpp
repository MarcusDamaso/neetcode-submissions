class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> strmap;
        for(int i = 0 ; i< strs.size();i++){
            string copia = strs.at(i);
            sort(copia.begin(),copia.end());
            strmap[copia].push_back(strs.at(i));
        }
        vector<vector<string>> resultado;
        for(const auto& p : strmap){
            resultado.push_back(p.second);
        }

        return resultado;
    


       }

    
};
