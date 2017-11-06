#include<iostream>
using namespace std;
class Node {
public:
	int value;
	Node *left , *right;
	Node(int _value) {
		value = _value;
	}
};

class Tree {
public:
	Node *root;
	void addToTree(int value) 
	{
		if (!root) {
			root = new Node(value);
		}
		else {
			addToNodes(root, value);
		}
	}

	void addToNodes(Node *root, int value) 
	{
		if (root->value) 
		{
			if (!root->left) 
			{
				root->left = new Node(value);
			}
			else
			{
				addToNodes(root->left, value);
			}

		}
		else 
		{
			if (!root->right) {
				root->right = new Node(value);
			}
			else {
				addToNodes(root->right, value);
			}
		}	
	}


	void FindInTree(int value) {
		if (!root) {
			cout << "there's no tree root";
		}
		else {
			findInNodes(root, value);
		}
	}

	void findInNodes(Node *root, int _value)
	{		
		int k = 0;
		
		if (root->value == _value)
		{
			cout << "Found value!" << endl; // нашли!!!
		}
		else 
		{
			if (!root->left) 
			{ 
				findInNodes(root->left, _value); }
			else
			{
				cout << "NOT FOUND! " << endl; // не найден
			}

			if (!root->right)
			{
				findInNodes(root->right, _value);
			}
			else
			{
				cout << "NOT FOUND! " << endl; // не найден
			}
		}
		
	}
	
};

int main() {
	Tree tree;
	tree.addToTree(5);
	tree.addToTree(10);
	tree.findInNodes(10);
	system("pause");
	return 0;
}