class BSTIterator {
    Stack<TreeNode> s = new Stack<>();
    public BSTIterator(TreeNode root) {
        pushAll(root);
    }
    public int next() {
        TreeNode curr = s.pop();
        pushAll(curr.right);
        return curr.val;
    }
    public boolean hasNext() {
        return !s.isEmpty();
    }
    private void pushAll(TreeNode node) {
        while(node != null) {
            s.push(node);
            node = node.left;
        }
    }
}
