#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 * Return: A pointer to the new tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	new_tree = tree->right;
	tree->right = new_tree->left;

	if (new_tree->left != NULL)
		new_tree->left->parent = tree;

	new_tree->parent = tree->parent;

	if (tree->parent == NULL)
	{
		new_tree->parent = NULL;
	}
	else if (tree->parent->left == tree)
	{
		tree->parent->left = new_tree;
	}
	else
	{
		tree->parent->right = new_tree;
	}

	new_tree->left = tree;
	tree->parent = new_tree;

	return (new_tree);
}

