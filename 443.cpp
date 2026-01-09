class Solution {
public:
    int compress(vector<char>& chars) {
int write = 0;
int i = 0;
while(i<chars.size()){
    char currentChar = chars[i];
    int count = 0;
while(i<chars.size() && chars[i] == currentChar){
    i++;
    count++;
}
chars[write++] = currentChar;
if(count>1){
    string cnt = to_string(count);
    for(char c : cnt){
        chars[write++] = c;
    }
}
}
        return write;
    }
};