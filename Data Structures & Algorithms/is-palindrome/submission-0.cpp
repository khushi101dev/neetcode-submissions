class Solution {
public:
bool isalphaNumeric(char ch ){
    if((ch >= '0' && ch <= '9') ||
      (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
       return true;
    return false;
}


    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0 ;
        int j = n-1;
        while(i < j){
            
            if( !isalphaNumeric(s[i])){ 
             i++; 
             continue;
            }
            if( !isalphaNumeric(s[j])){
             j--; 
             continue;
            }

            if( tolower(s[i]) !=  tolower(s[j]))
             return false;
            i++;
            j--;
             
        }

        return true;
        
    }
};
