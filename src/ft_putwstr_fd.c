/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putwstr_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <kerbault@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:42:46 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/13 20:00:16 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_putwstr_fd(wchar_t *s, const int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		ft_putwchar_fd(s[i++], fd);
}
