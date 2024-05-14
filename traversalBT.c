// 이진 트리에 대한 전위 순회 연산
void preorder(treeNode* root) {
	if (root) {
		printf("%c", root->data);  //작업D
		preorder(root->left);       //작업L
		preorder(root->right);	 //작업R
	}
}

// 이진 트리에 대한 중위 순회 연산
void inorder(treeNode* root) {
	if (root) {
		inorder(root->left);        //작업L
		printf("%c", root->data); //작업D
		inorder(root->right);      //작업R
	}
}

// 이진 트리에 대한 후위 순회 연산
void postorder(treeNode* root) {
	if (root) {
		postorder(root->left);    //작업L
		postorder(root->right);  //작업R
		printf("%c", root->data); //작업D
	}
}