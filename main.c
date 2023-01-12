#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void alltoupper(void * str)
{
	for (char *ptr = str; *ptr != '\0'; ++ptr)
	{
		*ptr = ft_toupper(*ptr);
	}
}

int main(void)
{

	t_list	*lst;
	char * hello = { "Hello World" };
	char * mellamo = { "Yo soy la Bea" };
	char * quetal = {"Que tal"};


	char * hellodup = ft_strdup(hello);
	char * mellamodup = ft_strdup(mellamo);
	char * quetaldup = ft_strdup(quetal);

	lst = ft_lstnew(hellodup);

	ft_lstadd_back(&lst, ft_lstnew(mellamodup));
	ft_lstadd_front(&lst, ft_lstnew(quetaldup));

	ft_lstiter(lst, alltoupper);

	for (t_list *ptr = lst; ptr != NULL; ptr = ptr->next)
	{
		printf("%s\n", ptr->content);
	}

	ft_lstclear(&lst, free);



	return 0;
}