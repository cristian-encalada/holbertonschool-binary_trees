#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hleft = 1, hright = 1;

	if (tree)
	{
		hleft = binary_tree_height(tree->left);
		hright = binary_tree_height(tree->right);
		return (hleft - hright);
	}

	return (0);
}

/**
 * binary_tree_height - Measures the height of a node in a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t height_left = 1, height_right = 1;

		if (tree->left != NULL)
			height_left = 1 + binary_tree_height(tree->left);

		if (tree->right != NULL)
			height_right = 1 + binary_tree_height(tree->right);

		if (height_left > height_right)
			return (height_left);
		else
			return (height_right);
	}
	return (0);
}
