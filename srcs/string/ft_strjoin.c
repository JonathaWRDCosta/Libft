/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:45:19 by jonathro          #+#    #+#             */
/*   Updated: 2025/02/03 23:44:05 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, s1, s1_len + 1);
	ft_strlcpy(s + s1_len, s2, s2_len + 1);
	return (s);
}

/*
int	main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result;

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
*/