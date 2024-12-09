#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: The height of the tree. Else, 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight;
	size_t rheight;

	if (tree == NULL)
	{
		return (0);
	}

	lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((lheight > rheight ? lheight : rheight));
}
