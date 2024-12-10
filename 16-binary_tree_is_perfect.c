#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_perfect - chaecks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((binary_tree_is_full(tree) == 1) && binary_tree_balance(tree) == 0)
	{
		return (0);
	}
	return (1);
}
