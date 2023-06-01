#include "binary_trees.h"

/**
 * binary_tree_leaves - count how many leaves in a binary tree
 * @tree: pointer to root node
 * Return: number of leaves, 0 if NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves += 1;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
