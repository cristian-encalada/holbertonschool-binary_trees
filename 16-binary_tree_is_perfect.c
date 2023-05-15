#include "binary_trees.h"

size_t maximum_depth(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If tree is perfect, return 1
 *			If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* 3rd argument = 0 to start traversing from the root at level 0*/
	return (is_perfect_recursive(tree, maximum_depth(tree), 0));
}

/**
 * is_perfect_recursive - Helper function to check if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * @depth: maximum depth of the binary tree
 * @level: check the current level of the node
 *
 * Return: If tree is perfect, return 1
 *			If tree is NULL, return 0
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (depth == level);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * maximum_depth - Measures the maximum depth of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: If tree is NULL, return 0
 */
size_t maximum_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (0);

	left_depth = maximum_depth(tree->left);
	right_depth = maximum_depth(tree->right);

	if (left_depth > right_depth)
		return (1 + left_depth);
	return (1 + right_depth);
}
