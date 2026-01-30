#include "libft.h"
#include <stdio.h>

void del(void *a)
{
	free(a);
}
void f(void *a)
{
	char* str = (char *)a;
	str[0] = 'B';
}
void *fn(void *a)
{
	return (ft_strdup((char *)a + 1));
}

int main()
{
	t_list *lst;
	lst = ft_lstnew(ft_strdup("world"));
	ft_lstadd_front(&lst,ft_lstnew(ft_strdup("hello")));
	printf("%s\n",lst->content);
	printf("%s\n",lst->next->content);
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("!")));
	printf("%s\n", (char *)ft_lstlast(lst)->content);

	ft_lstiter(lst, f);
	printf("%s\n", lst->content);

	t_list *new_lst;
	new_lst = ft_lstmap(lst, fn, del);
	printf("%s\n", new_lst->content);

	t_list *temp;
	temp = lst->next;
	ft_lstdelone(lst,del);
	lst = temp;
	printf("%d\n", ft_lstsize(lst));



	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	if(lst == NULL && new_lst == NULL)
		printf("clear\n");
	return (0);
}
