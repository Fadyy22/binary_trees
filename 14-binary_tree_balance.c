#include "binary_trees.h"

/**
 * find_height - finds the height of a tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: height of the tree
 */
size_t find_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = find_height(tree->left);
	right_height = find_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (find_height(tree) - 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
