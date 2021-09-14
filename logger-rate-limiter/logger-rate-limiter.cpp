class Logger {
private:
    deque<pair<int,string>> dq;
    unordered_set<string> set;
public:
    /** Initialize your data structure here. */
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        //clean up
        while(dq.size() and timestamp-dq.front().first>=10){
            set.erase(dq.front().second);
            dq.pop_front();
        }
        
        if(set.count(message)){
            return false;
        }else{
            dq.push_back({timestamp,message});
            set.insert(message);
            return true;
        }
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */