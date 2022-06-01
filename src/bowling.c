/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bowling.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jobvan-d <jobvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 16:17:25 by jobvan-d      #+#    #+#                 */
/*   Updated: 2022/06/01 16:21:22 by jobvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bowling.h"

#include <unistd.h>

int is_correct_spare(int first, int second)
{
	if (first < 0 || second < 0)
		return (-1);
	if (first + second > 10)
		return (-1);
	return (first + second);
}

int	bowling_inner(int argc, char **argv)
{
	if (argc < 10 + 1)
	{
		return (0);
	}
	(void)argv;
	return (1);
}

int	bowling(int argc, char **argv)
{
	if (!bowling_inner(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
