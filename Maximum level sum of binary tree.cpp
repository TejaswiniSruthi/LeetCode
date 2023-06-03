class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int res,m=0,l=1,s,rl=1;
        queue<TreeNode*>q;
        q.push(root);
        m=root->val;
        
        while(!q.empty()){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                if(node->left!=NULL){
                    s+=(node->left)->val;
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    s+=(node->right)->val;
                    q.push(node->right);
                }
            }
            if(q.empty()) return rl;
            l++;
            if(s>m){
                m=s;
                rl=l;
            }
            s=0;
        }
        return rl;
    }
};
