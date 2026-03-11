int ft_list_size(t_list *begin_list)
{
	int count = 0;
	t_list *start;

	start = begin_list;
	while(start)
	{
		count++;
		start = start->next;
	}
	return(count);
}