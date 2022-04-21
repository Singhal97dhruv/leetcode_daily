Given a list of folders folder, return the folders after removing all sub-folders in those folders. You may return the answer in any order.

If a folder[i] is located within another folder[j], it is called a sub-folder of it.

The format of a path is one or more concatenated strings of the form: '/' followed by one or more lowercase English letters.

For example, "/leetcode" and "/leetcode/problems" are valid paths while an empty string and "/" are not.
  
  
  class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>res;
        unordered_map<string,int>map;
        for(int i=0;i<folder.size();i++){
            string temp;
            int flag=0;
            for(int j=0;j<folder[i].size();j++){
                temp+=folder[i][j];
                if(map[temp]>0 && ((j+1==folder[i].size()) ||(folder[i][j+1]=='/'))){flag=1;break;}
            }
            if(flag==0){
                map[temp]++;
                res.push_back(temp);
            }
        }
        return res;
    }
};
