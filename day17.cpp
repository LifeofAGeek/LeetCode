//DFS
class Solution {
public:
    void traverseIsland(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || col < 0) {
            return;
        }

        if (row >= (int)grid.size() || col >= (int)grid[0].size()) {
            return;
        }

        if (grid[row][col] == '0') {
            return;
        }

        grid[row][col] = '0';

        traverseIsland(grid, row, col + 1);
        traverseIsland(grid, row + 1, col);
        traverseIsland(grid, row - 1, col);
        traverseIsland(grid, row, col - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int numIsland = 0;

        for (int row = 0; row < (int)grid.size(); ++row) {
            for (int col = 0; col < (int)grid[0].size(); ++col) {
                char cell = grid[row][col];

                if (cell == '1') {
                    traverseIsland(grid, row, col);
                    ++numIsland;
                }
            }
        }

        return numIsland;
    }
};
