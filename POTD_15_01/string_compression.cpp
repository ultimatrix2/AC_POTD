class Solution {
public:
    int compress(vector<char>& chars) {
        int cur = 0,   len = chars.size();
        if( len == 1)
            return 1;
        int ct= 1,pos = 0;
        char pre= ' ';
        while( cur < len- 1){
            if( chars[ cur ] == chars[ cur +1 ]){
                ct++;
            }else {
                if( ct > 1){
                    pre = chars[ cur];
                    chars[ pos++] = chars[ cur];
                  
                    string str= to_string( ct);
                    for( const char &  p :  str)
                        chars[  pos++] =  p;
                    
                    ct =1;
                }else if( ct== 1) {
                    pre = chars[ cur];
                    chars[ pos] = chars[ cur];
                    pos++;
                }
            }
            cur++;
        }
            
         if( ct > 1){
            chars[ pos++] = chars[ cur];
            string str= to_string( ct);
                    for( const char &  p :  str)
                        chars[  pos++] =  p;
           }
        else if( chars[ len -1] != pre)
            {
             chars[ pos++] = chars[ cur];}

        return pos;

    }
};
