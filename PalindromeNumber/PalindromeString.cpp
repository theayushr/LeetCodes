class Solution {
public:
    bool isPalindrome(int x) {
	
			string num = to_string(x);

			int size = num.size();
			for(int i=0; i<size/2; i++){
				if(num[i] != num[size-1-i]){
					return false;
				}
			}

			return true;
        
    }
};
