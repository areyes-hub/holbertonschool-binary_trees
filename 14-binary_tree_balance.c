#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * Return: The balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}
	return (left - right);
}
