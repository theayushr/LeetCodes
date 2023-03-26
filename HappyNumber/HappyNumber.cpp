class Solution {
public:
		int nextNum(int num){

		int sqSum = 0;
		while(num!=0){
			int temp = num%10;
			sqSum += temp*temp;
			num/=10;
		}

		return sqSum;
	}


	bool isHappy(int num){

		while(num!=1 and num!=4){
			num = nextNum(num);
		}

		return num==1;	
	}
};
