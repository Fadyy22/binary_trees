#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree->left)
		leaf += 1;
	if (tree->right)
		leaf += 1;

	if (leaf == 0)
		leaf += 1;

	return (leaf);
}
