/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 20:05:50 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/07 20:07:46 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}
