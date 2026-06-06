#pragma once

#include <cxxtest/TestSuite.h>
#include "Header.h"
#include <math.h>

class MyTestSuite : public CxxTest::TestSuite
{
public:

	void test_equal_roots(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(1, 2, 1, x1, x2),1);

		TS_ASSERT_DELTA(x1, -1, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1, std::numeric_limits<double>::epsilon());

		TS_ASSERT_EQUALS(x1, x2);
	}

	void test_linear(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(0, 1, 1, x1, x2),1);

		TS_ASSERT_DELTA(x1, -1, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1, std::numeric_limits<double>::epsilon());
	}

	void test_constant(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(0, 0, 1, x1, x2),0);

		TS_ASSERT_IS_NAN(x1);
		TS_ASSERT_IS_NAN(x2);
	}

	void test_square(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(1, 0, 0, x1, x2),1);

		TS_ASSERT_DELTA(x1, 0, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, 0, std::numeric_limits<double>::epsilon());
	}

	void test_5(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(1, 0, -1, x1, x2), 2);

		TS_ASSERT_DELTA(x1, 1, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1, std::numeric_limits<double>::epsilon());
	}

	void test_zero(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(0, 0, 0, x1, x2),-1);

		TS_ASSERT_IS_NAN(x1);
		TS_ASSERT_IS_NAN(x2);
	}


	void test_negative_discriminant(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(1, 1, 1, x1, x2),1);

		TS_ASSERT_IS_NAN(x1);
		TS_ASSERT_IS_NAN(x2);
	}

	void test_negative(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(-1, -2, 0, x1, x2),2);

		TS_ASSERT_DELTA(x1, -2, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, 0, std::numeric_limits<double>::epsilon());
	}

	void test_golden_ratio(void)
	{
		double x1, x2;
		TS_ASSERT_EQUALS(solve_quadratic(1, -1, -1, x1, x2),2);

		auto golden_ratio = 1.61803398874989484820;

		if (x1 < x2) std::swap(x1, x2);

		TS_ASSERT_DELTA(x1, golden_ratio, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1./golden_ratio, std::numeric_limits<double>::epsilon());
	}

	void test_close_to_zero_all(void)
	{
		double x1, x2;

		constexpr auto eps = std::numeric_limits<double>::min();
		TS_ASSERT_EQUALS(solve_quadratic(eps, 2*eps, eps, x1, x2),1);

		TS_ASSERT_DELTA(x1, -1, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1, std::numeric_limits<double>::epsilon());

		TS_ASSERT_EQUALS(x1, x2);
	}

	void test_close_to_zero(void)
	{
		double x1, x2;

		constexpr auto eps = std::numeric_limits<double>::epsilon();
		solve_quadratic(eps, -1, -1, x1, x2);

		if (x1 < x2) std::swap(x1, x2);
		TS_ASSERT_DELTA(x1, -1., std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1., std::numeric_limits<double>::epsilon());


		solve_quadratic(-eps, -1, -1, x1, x2);

		if (x1 < x2) std::swap(x1, x2);
		TS_ASSERT_DELTA(x1, -1., std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1., std::numeric_limits<double>::epsilon());

	}

	void test_huge_all(void)
	{
		double x1, x2;

		double huge = 0.5*std::sqrt(std::numeric_limits<double>::max());
		solve_quadratic(huge, 2 * huge, huge, x1, x2);

		TS_ASSERT_DELTA(x1, -1, std::numeric_limits<double>::epsilon());
		TS_ASSERT_DELTA(x2, -1, std::numeric_limits<double>::epsilon());

		TS_ASSERT_EQUALS(x1, x2);
	}

};