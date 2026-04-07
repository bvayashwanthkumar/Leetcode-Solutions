class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> ans;
        int left=0;
        for(int i=0;i<title.size();i++){
            if(title[i]==' '){
                ans.push_back(title.substr(left,i-left));
                left=i+1;
            }
        }
        ans.push_back(title.substr(left));
        string result="";
        for(int i=0;i<ans.size();i++){
           
            for(char &c : ans[i])c=tolower(c);
            
            if(ans[i].size()>2){
               ans[i][0]=toupper(ans[i][0]); 
               
            }


        }

        for(int i=0;i<ans.size()-1;i++){
            result+=ans[i]+" ";

        }
        result+=ans[ans.size()-1];
        return result;
    }
};