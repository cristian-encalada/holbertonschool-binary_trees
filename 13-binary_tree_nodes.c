#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * @tree: a pointer to the root node of the tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		i++;
	}

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)
	+ i);
}
