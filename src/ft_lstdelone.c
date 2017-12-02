/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdelone.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:38:21 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:38:24 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	VOID_NULL_CHECK(alst);
	VOID_NULL_CHECK(*alst);
	(*del)((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
	*alst = NULL;
}
