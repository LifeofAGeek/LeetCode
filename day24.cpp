class LRUCache {
public:
    list<int> q;
    unordered_map<int,int> m;
    int cap;
    LRUCache(int capacity)
    {
    cap=capacity;
    }
    
    int get(int key)
    {   if(m.find(key)==m.end())
            return -1;
        else
        {   q.remove(key);
            q.push_back(key);
            return m[key];

        }
    }

    void put(int key, int value)
    {   if(m.find(key)!=m.end())
        {   q.remove(key);
            m.erase(key);
        }   
        if(q.size()==cap)
        {   int cur=q.front();
            q.pop_front();
            m.erase(cur);
        }
        m[key]=value;
        q.push_back(key);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
