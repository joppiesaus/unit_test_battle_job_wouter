/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jobvan-d <jobvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 16:29:29 by jobvan-d      #+#    #+#                 */
/*   Updated: 2022/06/01 16:30:48 by jobvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	input_check(int *args, int amount)
{
	(void)args;
	if (amount <= 10 || amount > 20)
	{
		return (-1);
	}
	return (0);
}
