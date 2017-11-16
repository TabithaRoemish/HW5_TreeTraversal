//File: BST.h
// Programmer: Tabitha Roemish
// Date: 11/10/2017
// File contains: node class declaration (all public),
//		BST Class declaration and defintions. 
#ifndef BST_H
#define BST_H
#include <iostream>
#include <queue>

using namespace std;
class node
{
public:
	node(int num) : num(num), right(NULL), left(NULL) {};
	int num;
	node* right;
	node* left;
};

class BST
{
public:
	BST() : root(NULL) {};
	~BST() { clearTree(root); };
	void insert(int num) { insertPrivate(num, root); };
	void printInOrder(ostream& out, node* nd);
	void printPreOrder(ostream& out, node* nd);
	void printPostOrder(ostream& out, node* nd);
	void printBreadthFirst(ostream& out, node*nd);
	node* getRoot() { return root; };

private:
	node* root;
	void insertPrivate(int num, node* nd);
	void clearTree(node* nd);
};

void BST::insertPrivate(int num, node* nd)
{
	if (nd == NULL)
	{
		nd = new node(num);
		if (root == NULL)
			root = nd;
	}
	else if (num > nd->num)
	{
		if (nd->right == NULL)
			nd->right = new node(num);
		else
			insertPrivate(num, nd->right);
	}
	else // if num less
	{
		if (nd->left == NULL)
			nd->left = new node(num);
		else
			insertPrivate(num, nd->left);
	}
}

void BST::printInOrder(ostream& out, node* nd)
{
	if (nd != NULL)
	{
		printInOrder(out, nd->left);
		out << nd->num << " ";
		printInOrder(out, nd->right);
	}
}

void BST::printPreOrder(ostream& out, node* nd)
{
	if (nd != NULL)
	{
		out << nd->num << " ";
		printPreOrder(out, nd->left);
		printPreOrder(out, nd->right);
	}
}

void BST::printPostOrder(ostream& out, node* nd)
{
	if (nd != NULL)
	{
		printPostOrder(out, nd->left);
		printPostOrder(out, nd->right);
		out << nd->num << " ";
	}
}

void BST::printBreadthFirst(ostream& out, node*nd)
{
	//flattens tree into queue of nodes
	queue<node*> printQueue;
	printQueue.push(root);
	while (!printQueue.empty())
	{
		out << printQueue.front()->num << " ";
		if (printQueue.front()->left != NULL)
			printQueue.push(printQueue.front()->left);
		if (printQueue.front()->right != NULL)
			printQueue.push(printQueue.front()->right);
		printQueue.pop();
	}

}

void BST::clearTree(node* nd)
{
	if (nd != NULL)
	{
		clearTree(nd->left);
		clearTree(nd->right);
		delete nd;
		nd = NULL;
	}
}

#endif


