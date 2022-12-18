// CPP program to construct a binary tree in level order.
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};

struct Node* newNode(int value)
{
	Node* n = new Node;
	n->key = value;
	n->left = NULL;
	n->right = NULL;
	return n;
}

struct Node* insertValue(struct Node* root, int value, queue<Node *>& q)
{
	Node* node = newNode(value);
	if (root == NULL)
		root = node;

	else if (q.front()->left == NULL)
		q.front()->left = node;

	else {
		q.front()->right = node;
		q.pop();
	}

	q.push(node);
	return root;
}

Node* createTree(int arr[], int n)
{
	Node* root = NULL;
	queue<Node*> q;
	for (int i = 0; i < n; i++)
	root = insertValue(root, arr[i], q);
	return root;
}

void Inorder(Node* node){
	if (node == NULL) return;
	Inorder(node->left);
	cout<< node->key<< " ";
	Inorder(node->right);
}

void Preorder(Node* node){
	if (node == NULL) return;
	cout<< node->key<< " ";
	Preorder(node->left);
	Preorder(node->right);
}

void Postorder(Node* node){
	if (node == NULL) return;
	Postorder(node->left);
	Postorder(node->right);
	cout<< node->key<< " ";
}

void LevelOrder(Node* node){

	if (node == NULL) return;
	queue<Node*> q;
	q.push(node);
	while(q.empty() == false){
		Node* temp = q.front();
		cout<< temp->key<<" ";
		q.pop();
		if(temp->left != NULL) q.push(temp->left);
		if(temp->right != NULL) q.push(temp->right);
	}

}

// Driver code
int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Node* root = createTree(arr, n);
	Inorder(root);
	cout<<endl;
	Preorder(root);
	cout<<endl;
	Postorder(root);
	cout<<endl;
	LevelOrder(root);
	return 0;
}
