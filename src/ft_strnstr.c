/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:44:23 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:44:27 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			i = len;
			s1 = (char *)haystack + 1;
			s2 = (char *)needle + 1;
			while (*s1 && *s2 && *s1 == *s2 && i--)
			{
				s1++;
				s2++;
			}
			if (!*s2)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
