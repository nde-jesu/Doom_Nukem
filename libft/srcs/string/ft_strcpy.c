/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:46:11 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/25 17:50:43 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = -1;
	while (src && src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
