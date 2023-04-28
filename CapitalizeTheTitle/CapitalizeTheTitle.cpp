class Solution {
public:
    string capitalizeTitle(string title) {

        if(title.size()==1){
            title[0] = tolower(title[0]);
            return title;
        }

        int pos = 0;
        int n = title.size();

        for(int i=1; i<n; i++){

            if(title[i]==' ' or i == n-1){

                string sub = title.substr(pos, i-pos);

                if(i==n-1){
                    sub = title.substr(pos, n-pos);
                }

                if(sub.length() ==1){
                    title[pos] = tolower(title[pos]);
                }
                else if(sub.length() ==2){
                    title[pos] = tolower(title[pos]);
                    title[pos+1] = tolower(title[pos+1]);
                }
                else{
                    title[pos] = toupper(title[pos]);
                    for(int j =pos+1; j<=i; j++){
                        title[j] = tolower(title[j]);
                    }
                }

                pos = i+1;
            }

        }
        //title[title.size()-1] = tolower(title[title.size()-1]);
        
        return title;

    }
};
