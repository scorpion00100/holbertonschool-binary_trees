#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (h_left > h_right ? h_left : h_right);
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of a binary tree, If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_factor = 0, left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = (int)binary_tree_height(tree->left);
	right = (int)binary_tree_height(tree->right);

	b_factor = left - right;

	return (b_factor);
}
