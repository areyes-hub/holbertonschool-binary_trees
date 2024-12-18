#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: A pointer to the node to check
 * Return: 1 if its a leaf. 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
