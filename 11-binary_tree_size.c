#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: Size of a binary tree, if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
