/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:38:33 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:38:36 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tmp;

	NULL_CHECK(lst);
	NULL_CHECK(f);
	if ((result = ft_lstnew(f(lst)->content, f(lst)->content_size)))
	{
		tmp = result;
		lst = lst->next;
		while (lst)
		{
			MALLOC_CHECK(
				(tmp->next = ft_lstnew(f(lst)->content, f(lst)->content_size)));
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (result);
}
