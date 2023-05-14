#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	/* Count the number of levels traversing up until the root */
	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
