/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:31:55 by rpereira          #+#    #+#             */
/*   Updated: 2024/06/26 18:51:11 by rpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (temp == 0)
	{
		if (s1[i] != s2[i])
			temp = s1[i] - s2[i];
		else if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		else
			i++;
	}
	return (temp);
}
