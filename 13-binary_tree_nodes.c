#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: pointer to root node
 * Return: number of nodes, 0 if NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
