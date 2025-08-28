class Solution {
public:
    int minLength(string s) {
        string str1 = "AB";
        string str2 = "CD";
        while(s.length()>0 && s.find(str1)<s.length() || s.find(str2)<s.length()){
            if(s.find(str1)<s.length()){
                int st = s.find(str1);
                s.erase(st,str1.length());
            }else if(s.find(str2)<s.length()){
                int st1 = s.find(str2);
                s.erase(st1,str2.length());
            }
        }
        int n = s.length();
        return n;
    }
};
