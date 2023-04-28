class Solution {
public:
    string decodeMessage(string key, string message) {

        char alpha ='a';
        //unordered_map<char, int> freq;
        unordered_map<char,char> cipher;

        cipher[' '] = ' ';
        
        for(int i=0; i<key.size(); i++){
            if(cipher.count(key[i])==0){
                cipher[key[i]] = alpha;
                alpha++;
            }
        }

        for(int i=0; i<message.size(); i++){
            message[i] = cipher[message[i]];
        }

        return message;


        
    }
};
