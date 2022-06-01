/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bowling.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jobvan-d <jobvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/01 15:53:07 by jobvan-d      #+#    #+#                 */
/*   Updated: 2022/06/01 16:29:00 by jobvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOWLING_H
# define BOWLING_H

int	bowling(int argc, char **argv);
int is_correct_spare(int first, int second);
int	input_check(int *args, int amount);

#endif
