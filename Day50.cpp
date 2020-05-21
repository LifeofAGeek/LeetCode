class Solution {
public:
    
    int countsquare(vector<vector<int>>& matrix, int r, int c, vector<vector<int>>& memo)
    {
        if(r<0 || c<0 || r>=matrix.size() || c>=matrix[0].size() || matrix[r][c]==0) return 0;
        
        if(memo[r][c]!=0) return memo[r][c];
        
        int count=0;
        
        int right=countsquare(matrix,r,c+1,memo), down=countsquare(matrix,r+1,c,memo), dia=countsquare(matrix,r+1,c+1,memo);
        
        count=1+min(right, min(down, dia));
        
        memo[r][c]=count;
        return count;
    }
    
    int countSquares(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int ans=0;
        vector<vector<int>> mem(row, vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==1) 
                    ans+=countsquare(matrix,i,j,mem);
            }
        }
        return ans;
    }
};
