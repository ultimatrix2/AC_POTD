class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int row = box.size();
        int col = box[0].size();
        
        for( int  i= 0 ; i < row ;i++)
        {
            int left = col  - 1 , right =  col - 1;
            while( left>= 0){
                if(  box[i][ left] == '#'){
                    if( box[i][ right] != '#')
                        swap(box[i][ left], box[i][ right] );
                    left--, right --; 
                }
                else if( box[i][ left] == '.'){
                    left--;
                }else{
                    left--;
                    right = left;
                }
            }
        
        }

      // 2d vector rotation
        
         vector< vector <char> > result (col , vector <char> (row));
         for( int  i= 0 ; i < row ;i++){
            for( int  j= 0 ; j <col ;j++){
                result[j][row - i -1 ] = box[i][j];
            }
        }
        
        return result;
    }
};
