Node* InorderSuccessor(Node* node, Node* root) {
    //Case1 : Node has a right subtree
    if (node->right != NULL) {
        Node* temp = node->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        return temp;
    }
    //Case2 : Node does not have a right subtree
    Node* s = root;
    Node* result = NULL;
    while (s->data != node->data) {
        if (node->data <= s->data) {
            result = s;
            s = s->left;
        }
        else {
            s = s->right;
        }
    }
    return result;
};
