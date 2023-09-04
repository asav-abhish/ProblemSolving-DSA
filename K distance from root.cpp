// https://practice.geeksforgeeks.org/problems/k-distance-from-root/1

vector<int> Kdistance(struct Node *root, int k)
{
  vector<int> v;

  int itr = 1;
  queue<pair <struct Node*, int > > q;
  q.push(make_pair(root, 0));
  q.push(make_pair(nullptr, itr));
  
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        
        if(x.first == NULL ){
            if(!q.empty()){
                q.push(make_pair(nullptr,itr));
                itr++;
            }
        }
        
        else{
            if(k == x.second && x.first != NULL ){
            v.push_back(x.first->data);
            }
            
            if(x.first->left){
                q.push(make_pair(x.first->left,itr));
            }
            if(x.first->right){
                q.push(make_pair(x.first->right,itr));
            }
        }
        
    }
    return v;
}
