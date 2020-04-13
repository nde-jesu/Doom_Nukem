/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_status.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 19:43:21 by kibotrel          #+#    #+#             */
/*   Updated: 2019/10/16 03:06:56 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"
#include "bmp.h"

int			dislay_output(t_file *file, uint32_t status)
{
	if (status)
	{
		ft_putstr("\033[31;1mError:\033[0m BMP Parser returned an error (");
		ft_putnbr(status);
		ft_putstr(file->msg[status]);
		return (status);
	}
	else
		return (BMP_OK);
}
