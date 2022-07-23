class Solution {
public:
    Node* dfs(Node* cur,unordered_map<Node*,Node*>&mp)
    {
        vector<Node*>neighbor;
        Node* clone = new Node(cur->val);
        mp[cur] = clone;
        for(auto itr:cur->neighbors){
            if(mp.find(itr) != mp.end())
                neighbor.push_back(mp[itr]);
            else
                neighbor.push_back(dfs(itr,mp));
        }
        clone->neighbors = neighbor;
        return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>mp;
        if(node==NULL) return NULL;
        if(node->neighbors.size()==0){
            Node* clone = new Node(node->val);
            return clone;
        }
        return dfs(node,mp);
    }
};
