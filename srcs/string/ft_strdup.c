/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:26:38 by jonathro          #+#    #+#             */
/*   Updated: 2025/01/24 04:28:34 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
int main(void)
{
	char *str1 = "Hello, World!";
	char *str2 = "";
	char *str3 = NULL;
	char *dup1;
	char *dup2;
	char *dup3;

	dup1 = ft_strdup(str1);
	dup2 = ft_strdup(str2);
	dup3 = ft_strdup(str3);

	if (dup1)
		printf("Original: %s, Duplicate: %s\n", str1, dup1);
	else
		printf("Failed to duplicate str1\n");

	if (dup2)
		printf("Original: %s, Duplicate: %s\n", str2, dup2);
	else
		printf("Failed to duplicate str2\n");

	if (dup3)
		printf("Original: %s, Duplicate: %s\n", str3, dup3);
	else
		printf("Failed to duplicate str3\n");

	free(dup1);
	free(dup2);
	free(dup3);

	return 0;
}
*/