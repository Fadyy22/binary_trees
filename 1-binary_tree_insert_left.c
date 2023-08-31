#include "binary_trees.h"

/**
 *binary_tree_insert_left - a function that inserts a node
 *as the left-child of another node
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL || parent == NULL)
		return (NULL);

	left_node->n = value;
	parent->left = left_node;

	return (left_node);
}
