/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:20:21 by eulutas           #+#    #+#             */
/*   Updated: 2024/10/12 16:58:10 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	if(c>=0 && c<=0177)
	{
		return (1);
	}
	else
		return(0);
}