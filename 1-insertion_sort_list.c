void insertion_sort_list(listint_t **list)
{
    listint_t *current, *sorted, *next;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;
    while (current != NULL)
    {
        sorted = current;
        next = sorted->next;

        while (sorted->prev != NULL && sorted->n < sorted->prev->n)
        {
            if (sorted->next != NULL)
                sorted->next->prev = sorted->prev;
            sorted->prev->next = sorted->next;
            sorted->next = sorted->prev;
            sorted->prev = sorted->prev->prev;
            sorted->next->prev = sorted;
            if (sorted->prev != NULL)
                sorted->prev->next = sorted;
            else
                *list = sorted;
            print_list(*list);
        }
        current = next;
    }
}

