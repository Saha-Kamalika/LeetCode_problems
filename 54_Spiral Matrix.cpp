class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>spiral;
        int rows=matrix.size();
        int cols =matrix[0].size();
        int count =0;
        int total =rows*cols;
        int startingrow=0;
        int startingcol=0;
        int endingrow=rows-1;
        int endingcol=cols-1;
        
        while(count<total)
        {
            for(int i=startingcol;count<total && i<=endingcol; i++)
            {
                spiral.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            
            for(int i=startingrow;count<total && i<=endingrow; i++)
            {
                spiral.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            
            for(int i=endingcol;count<total && i>=startingcol; i--)
            {
                spiral.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            
            for(int i=endingrow;count<total && i>=startingrow; i--)
            {
                spiral.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }
        return spiral;
    }
};
