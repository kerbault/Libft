/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:44:46 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:44:48 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s)
		return (ft_strdup("\0"));
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = 0;
	while (len && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
	{
		len--;
		i++;
	}
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	s += i;
	i = 0;
	while (i < len)
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}
