class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> strmap;
        //hasehar cada ordered string com seu nome og
        for(int i =0;i<strs.size();i++){
            string copia = strs.at(i);
            sort(copia.begin(),copia.end());
            strmap[copia].push_back(strs.at(i));
        }
        vector<vector<string>> resultados;
        for(const auto p:strmap){
            resultados.push_back(p.second);
        }
        return resultados;




       }

    
};
