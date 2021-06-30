/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpark <kpark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 03:29:15 by kpark             #+#    #+#             */
/*   Updated: 2021/04/15 07:24:58 by kpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if ((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122))
			return (0);
		str++;
	}
	return (1);
}