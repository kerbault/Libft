/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:38:27 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:38:30 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	VOID_NULL_CHECK(f);
	VOID_NULL_CHECK(lst);
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
