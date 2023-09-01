#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}

/**
 * find_height - finds the height of a tree
 *
 * @tree: tree
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
 * has_two_childs - checks if node has two childs
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the node has two childs, otherwise 0
 */
int has_two_childs(const binary_tree_t *tree)
{
	if (tree && tree->left && tree->right)
		return (1);

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 * If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && find_height(tree->left) == find_height(tree->right))
	{
		if (find_height(tree->right) == 0)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (has_two_childs(tree->left) && has_two_childs(tree->right))
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0);
}
