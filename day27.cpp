int maximalSquare(vector<vector<char>>& matrix) 
    {
        int res = 0;
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return res;
        
        vector<vector<int>> length(matrix.size(), vector<int>(matrix[0].size()));

        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == '1')
                {
                    length[i][j] = 1;
                    
                    if(i > 0 && j > 0)
                        length[i][j] += min(length[i - 1][j], min(length[i - 1][j - 1], length[i][j - 1]));
                    res = max(res, length[i][j] * length[i][j]);
                }
            }
        }
        
        return res;
    }
