class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ndvector(numRows);
        // for interating over the row
        for(int i=0; i<numRows ; i++ ){
            ndvector[i].resize(i+1);
            ndvector[i][0]= ndvector[i][i]=1;
           
            //for the sum of values in column 
            for(int j=1 ; j<i; j++){
                ndvector[i][j] = ndvector[i-1][j-1] + ndvector[i-1][j];
            }
        }
        return ndvector ;
    }
};