class Solution {
public:
    bool isCircularSentence(string sentence) {
        int first=sentence[0];
        int last=sentence[0];
        for(int i=1;i<sentence.size();i++){
            if(sentence[i]==' '){
                if(last!=sentence[i+1])
                return false;
                
            }
                else
                last=sentence[i];
            }
        
        return  last==first;
    }
};