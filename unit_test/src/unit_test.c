/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unit_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 16:46:15 by safoh         #+#    #+#                 */
/*   Updated: 2022/06/01 16:20:49 by jobvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "bowling.h"

#include <criterion/redirect.h>

void	tester(double x, double y, double expected);

double ft_pow(double x, double y)
{
	return (x * y);
}

Test(Example_Tests, should_pass_all_tests_provided)
{
	tester(1.0, 1.0, 1.0);
}

void	tester(double x, double y, double expected)
{
	double submitted;
	submitted = ft_pow(x, y);
	cr_assert(ft_pow(x, y) == expected,
		"Submitted:\t%f for %f to the power of %f\nExpected:\t%f\n",
		submitted, x, y, expected
		);
}

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Bowling_Tests, Basic_Test, .init = redirect_all_std)
{
	char	*args[1];
	args[0] = "0";
	
	cr_expect(bowling(2, args) == false, "Input too short, should return error.");

	cr_assert_stderr_eq_str("Error\n", "On fail should return Error to stdout");
}

Test(Bowling_Tests, Test_Frame_Basic)
{
	cr_expect(is_correct_spare(8, 5) == -1, "Bowling frame 0, 0 is invalid");
	cr_expect(is_correct_spare(9, 1) == 10, "Bowling frame 9, 1 is valid");
	cr_expect(is_correct_spare(1, 9) == 10, "Bowling frame 1, 9 is valid");
	cr_expect(is_correct_spare(1, 5) == 6, "Bowling frame 1, 5 is valid");
	cr_expect(is_correct_spare(1, 0) == 1, "Bowling frame 1, 0 is valid");
	cr_expect(is_correct_spare(0, 6) == 6, "Bowling frame 0, 6 is valid");
	cr_expect(is_correct_spare(2, 5) == 7, "Bowling frame 2, 5 is valid");
	cr_expect(is_correct_spare(0, 11) == -1, "Bowling frame 0, 11 is invalid");
	cr_expect(is_correct_spare(11, 0) == -1, "Bowling frame 11, 0 is invalid");
	cr_expect(is_correct_spare(-1, 5) == -1, "Bowling frame -1, 5 is invalid");
	cr_expect(is_correct_spare(5, 6) == -1, "Bowling frame 5, 6 is invalid");
}