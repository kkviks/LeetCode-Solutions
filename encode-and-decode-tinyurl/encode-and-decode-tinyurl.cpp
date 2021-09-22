class Solution {
private:
    string store = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
    const int N = store.size();
    const string base = "http://tinyurl.com/";
    const int base_size = base.size();
    
    unordered_map<string,string> map;
    
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string key = "";
        do{
            key = getKey();
        }while(map.count(key)==1);
        
        map[key] = longUrl;
        return base + key;
    }
    
    string getKey(){
        string key = "";
        
        for(int i=0;i<6;i++){
            key += store[rand()%N];
        }
        
        return key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string key = shortUrl.substr(base_size);
        return map[key];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));