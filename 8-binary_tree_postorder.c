#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traverse a binary tree
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	}
	else if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
