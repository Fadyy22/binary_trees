#include "binary_trees.h"

/**
 * find_depth - finds the depth of a node
 *
 * @tree: tree
 *
 * Return: depth of the node
 */
size_t find_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (find_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_depth(tree));
}
