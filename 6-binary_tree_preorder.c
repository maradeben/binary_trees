#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traverse a binary tree
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	}
	else if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
