#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_depth - measures the depth of a node 
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: The depth of the node. Else, 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		depth += 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
