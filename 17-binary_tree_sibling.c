#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: A pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->n == node->parent->left->n)
	{
		return (node->parent->right);
	}
	else if (node->n == node->parent->right->n)
	{
		return (node->parent->left);
	}
	return (NULL);
}
