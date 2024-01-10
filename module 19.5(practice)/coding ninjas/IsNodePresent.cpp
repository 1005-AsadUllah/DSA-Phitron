/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int levelorder(BinaryTreeNode<int> *root, int x) {
 
  if (root == NULL)
    return 0;
  queue<BinaryTreeNode<int> *>q;
  q.push(root);

  while (!q.empty()) {
    // ber kora
    BinaryTreeNode<int> *f = q.front();
    q.pop();
    // kaj
    if (x == f->data) {
      
      return 1;
    }
    // connection
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
  return  0;
}
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    return levelorder(root,x) == 1;
}