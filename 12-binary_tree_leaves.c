#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the depth of a node in a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: If tree is NULL, return 0
 *          A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Count the number of leaves recursively */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
