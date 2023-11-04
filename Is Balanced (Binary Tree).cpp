// https://hack.codingblocks.com/app/contests/4001/381/problem

#include <iostream>
#include <utility>
#include<algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

pair<int,bool> isHeightBalancedOptimised(node *root)
{           pair <int , bool > p;
 p.first=0;
    p.second=true;

    // Write your code here
    if(root == NULL){
        return p;
    }
    pair <int,bool> x = isHeightBalancedOptimised(root->left);
    pair <int,bool> y = isHeightBalancedOptimised(root->right);
    p.first = max(x.first,y.first)+1;
    if(x.second == true and y.second == true and abs(x.first - y.first <= 1)){
         p.second = true;
    }
    else{
          p.second = false;
    }
   
    return p;
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}
