 int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> len(matrix.size() + 1, 0);
        len[0] = matrix[0].size();
        int time = 0,delete_len = 0, min;
        while(time < k){
            min = INT_MAX;
            delete_len = 1;
            for(int i = 1; i < len.size(); i++){
                if(len[i] == 0){
                    if(min >= matrix[i - 1][0]){
                        min = matrix[i - 1][0];
                        delete_len = i;
                    }
                    break;
                }else if(i < len.size() && len[i] < len[i - 1] && min >= matrix[i - 1][len[i]]){
                    min = matrix[i - 1][len[i]];
                    delete_len = i;
                }
            }
            
            len[delete_len]++;
            time++;    
        }
        return min;   
    }
