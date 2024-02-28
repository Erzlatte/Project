/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:06:36 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/28 20:11:27 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		y;
	int		z;
	char	*small;
	char	**big;

	if (!(big = (char **)malloc((ft_count(s, c) + 1) * sizeof(*big))))
		return (0);
	i = 0;
	y = 0;
	while (42)
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		k = 0;
		while (s[i + k] != '\0' && s[i + k] != c)
			k++;
		if (!(small = (char *)malloc((k + 1) * sizeof(char))))
			return (0);
		z = 0;
		while (z < k)
		{
			small[z] = s[i];
			z++;
			i++;
		}
		small[k] = '\0';
		big[y] = small;
		y++;
	}
	big[y] = NULL;
	return (big);
}
