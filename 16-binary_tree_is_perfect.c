#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree, if tree is NULL, return 0
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
