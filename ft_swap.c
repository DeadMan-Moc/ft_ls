/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:51:44 by amokgohl          #+#    #+#             */
/*   Updated: 2018/09/11 15:51:47 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	**ft_swap(char **str)
{
	char	*temp;
	int		i;

	i = 1;
	while (str[i + 1] != NULL)
	{
		if (str[i + 1][0] < str[i][0])
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	return (str);
}