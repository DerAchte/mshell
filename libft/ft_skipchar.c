/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:23:58 by thdervil          #+#    #+#             */
/*   Updated: 2018/11/23 16:25:15 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_skipchar(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] == c)
		i++;
}
