/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> map;
        if(node == NULL) return NULL;
        Node* newNode = new Node(node->val,{});
        map[node] = newNode;
        queue<Node*> q;
        q.push(node);
        
        while(q.empty()==false){
           Node *p = q.front();
            q.pop();
         for(auto  x :p->neighbors)
        {
            if(map.find(x) == map.end())
            {
             Node* temp = new Node(x->val,{});
              q.push(x);
                map[x] = temp;
            }
             map[p]->neighbors.push_back(map[x]);            
        }
        }
    
        return map[node];
    }
};