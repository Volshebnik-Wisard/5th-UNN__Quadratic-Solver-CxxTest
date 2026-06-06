#include <cmath>
#include <limits>


int solve_quadratic(double a, double b, double c, double& x1, double& x2)
{
	if ((a == b) && (b == c) && (c == 0.0)) { x1 = std::nan(""); x2 = std::nan(""); return -1; }
	if ((abs(a/b) <= std::numeric_limits<double>::epsilon()) || (a == b && b == 0.0))
	{
		if (abs(b/c) <= std::numeric_limits<double>::epsilon())
		{
			x1 = std::nan(""); x2 = std::nan(""); 
			if (c == 0.0) return 1;
			return 0;
		}

		x1 = x2 = -c / b;
		return 1;
	}
	if (4 * a * c > b * b) { x1 = std::nan(""); x2 = std::nan(""); return 0; }

	x1 = (-b + std::sqrt(b*b - 4 * a * c)) / 2.0 / a;
	x2 = (-b - std::sqrt(b*b - 4 * a * c)) / 2.0 / a;
	if (x1 == x2) return 1;
	return 2;
}