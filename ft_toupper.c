/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulutas <eulutas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:09:01 by eulutas           #+#    #+#             */
/*   Updated: 2024/10/12 17:11:14 by eulutas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int toupper(int c)
{
	if (c>='a' && c<='z')
	{
		return(c-32);
	}
	else
		return c;
	
}