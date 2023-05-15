#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node, if node has no uncle, return NULL
 *			If node is NULL, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (grandparent->left == node->parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
