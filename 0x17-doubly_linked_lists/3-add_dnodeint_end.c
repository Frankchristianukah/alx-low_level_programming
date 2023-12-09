d)
		return (NULL);

	/* malloc and set new node data */
	new_node = malloc(sizeof(struct dlistint_s));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	/* account for empty linked list */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	/* traverse to last node and insert */
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new_node->next = NULL;
	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
