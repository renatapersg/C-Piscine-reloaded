/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:30:45 by rpereira          #+#    #+#             */
/*   Updated: 2024/06/15 20:33:26 by rpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{ 
	int a = 10;
	int b = 3;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Divisao de %d por %d e %d\n", a, b, div);
	printf("Resto da divisao de %d por %d e %d\n", a, b, mod);

	return 0;
}*/
