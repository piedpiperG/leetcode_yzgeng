/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if (!root)
            return  root;
        queue<Node*>que;
        que.push(root);
        Node* cur;
        Node* nex;
        int count = 0;  //结点编号
        int notic = 1;  //指空记号
        while (!que.empty())
        {
            cur = que.front();
            que.pop();
            count++;
            if (cur->left)
            {
                que.push(cur->left);
                que.push(cur->right);
            }
            if (count == notic)
            {
                cur->next = NULL;
                notic *= 2;
                count = 0;
            }
            else
            {
                nex = que.front();
                cur->next = nex;
            }
        }
        return  root;
    }
};