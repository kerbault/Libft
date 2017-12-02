/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:38:15 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:38:19 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	VOID_NULL_CHECK(alst);
	VOID_NULL_CHECK(*alst);
	ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
