#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to check
 * Return: 1 if true, 0 if not leaf or if NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
