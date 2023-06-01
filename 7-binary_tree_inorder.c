#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traverse a binary tree
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
*/
void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	}
	else if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
