#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: A pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->n == node->parent->parent->right->right->n ||
			node->n == node->parent->parent->right->left->n)
	{
		return (node->parent->parent->left);
	}
	else if (node->n == node->parent->parent->left->left->n ||
			node->n == node->parent->parent->left->right->n)
	{
		return (node->parent->parent->right);
	}
	return (NULL);
}
