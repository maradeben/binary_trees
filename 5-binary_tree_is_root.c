#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: the node to check
 * Return: 1 if true, 0 if not leaf or if NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
