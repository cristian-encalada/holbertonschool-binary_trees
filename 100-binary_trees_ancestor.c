#include "binary_trees.h"
binary_tree_t *find_common_ancestor(const binary_tree_t *node1,
				const binary_tree_t *node2);
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 *			If no common ancestor was found, return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	return (find_common_ancestor(first, second));
}

/**
 * find_common_ancestor - Helper function to find the lowest common ancestor
 * @node1: First node to be checked
 * @node2: Second node to be checked
 *
 * Return: A pointer to the lowest common ancestor node
 */
binary_tree_t *find_common_ancestor(const binary_tree_t *node1,
				const binary_tree_t *node2)
{
	const binary_tree_t *temp1 = node1;
	const binary_tree_t *temp2 = node2;
/*
* traverse the tree from the given nodes
* until they point to the same node (the common ancestor)
* or both reach NULL
*/
	while (temp1 != temp2)
	{
		if (temp1 == NULL)
			temp1 = node2;
		else
			temp1 = temp1->parent;

		if (temp2 == NULL)
			temp2 = node1;
		else
			temp2 = temp2->parent;
	}

	return ((binary_tree_t *)temp1);
}
