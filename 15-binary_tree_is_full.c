#include "binary_trees.h"

int is_full_recursive(const binary_tree_t *tree);
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If tree is full, return 1
 *			If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Helper function to check if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	/* check if the left and right children have different boolean values */
	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (0);

	return (is_full_recursive(tree->left) && is_full_recursive(tree->right));
}
