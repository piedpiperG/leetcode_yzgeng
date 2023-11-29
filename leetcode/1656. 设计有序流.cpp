class OrderedStream {
public:
    vector<string>stream;
    int capacity;
    int ptr;
    OrderedStream(int n) 
    {
        capacity = n;
        stream.resize(capacity);
        ptr = 0;
    }

    vector<string> insert(int idKey, string value) 
    {
        vector<string>ans;
        int idkey = idKey - 1;
        stream[idkey] = value;
        if (ptr != idkey)
            return  ans;
        else
        {
            while (stream[ptr] != "")
            {
                ans.push_back(stream[ptr]);
                ptr++;
            }
            return  ans;
        }
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */