/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:13:14 by rpereira          #+#    #+#             */
/*   Updated: 2024/06/09 11:31:48 by rpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{ 
	int x = 5;
	int y = 10;

	printf("Before: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After: x = &d, y = %d\n", x,y);

	return 0;
}*/
