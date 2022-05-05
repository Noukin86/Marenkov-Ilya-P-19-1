#include "Tasks.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

Tasks::Tasks() {}
void Tasks::TsOne(double R, double t, double l)
{
	R = 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9;
	std::cout << "Значение R: " << round(R * 100) / 100 << "\n";
}
void Tasks::TsTwo(double K, double p, double y)
{
	K = log(pow(p, 2) + pow(y, 3)) + exp(p);
	std::cout << "Значение K: " << round(K * 100) / 100 << "\n";
}
void Tasks::TsThree(double G, double n, double y)
{
	G = n * (y + 3.5) + sqrt(y);
	std::cout << "Значение G: " << round(G * 100) / 100 << "\n";
}
void Tasks::TsFour(double D, double a, double t)
{
	D = 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5));
	std::cout << "Значение D: " << round(D * 100) / 100 << "\n";
}
void Tasks::TsFive(double L,  double x)
{
	L = 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3);
	std::cout << "Значение L: " << round(L * 100) / 100 << "\n";
}
void Tasks::TsSix(double M, double y, double x)
{
	M =cos(2) * y + 3.6 * exp(x);
	std::cout << "Значение M: " << round(M * 100) / 100 << "\n";
}
void Tasks::TsSeven(double N, double m)
{
	N = pow(m, 2) + 2.8 * abs(m) + 0.55;
	std::cout << "Значение N: " << round(N * 100) / 100 << "\n";
}
void Tasks::TsEight(double T, double y)
{
	T = sqrt(abs(6 * pow(y, 2) - 0.1 * y + 4));
	std::cout << "Значение T: " << round(T * 100) / 100 << "\n";
}
void Tasks::TsNine(double V, double y, double x)
{
	V = log(y + 0.95) + sin(pow(x, 4));
	std::cout << "Значение V: " << round(V * 100) / 100 << "\n";
}
void Tasks::TsTen(double U, double y, double k, double x)
{
	U = exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2);
	std::cout << "Значение U: " << round(U * 100) / 100 << "\n";
}
void Tasks::Ts11(double S, double y, double x)
{
	S = 9.756 * pow(y, 7) + 2 * tan(x);
	std::cout << "Значение S: " << round(S * 100) / 100 << "\n";
}
void Tasks::Ts12(double K, double t, double x)
{
	K = 7 * pow(t, 2) + 3 * sin(pow(x, 3)) + 9.2;
	std::cout << "Значение K: " << round(K * 100) / 100 << "\n";
}
void Tasks::Ts13(double E, double y)
{
	E = sqrt(abs(3 * pow(y, 2) + 0.5 * y + 4));
	std::cout << "Значение E: " << round(E * 100) / 100 << "\n";
}
void Tasks::Ts14(double R, double y, double x)
{
	R = abs(sqrt(pow(sin(y), 2) + 6.835) + exp(x));
	std::cout << "Значение R: " << round(R * 100) / 100 << "\n";
}
void Tasks::Ts15(double H, double y)
{
	H = sin(pow(y, 2)) - 2.8 * y + sqrt(abs(y));
	std::cout << "Значение H: " << round(H * 100) / 100 << "\n";
}
void Tasks::Ts16(double S, double y)
{
	S = sqrt(cos(4) * pow(y, 2) + 7.151);
	std::cout << "Значение S: " << round(S * 100) / 100 << "\n";
}
void Tasks::Ts17(double N, double y)
{
	N = 3 * pow(y, 2) +sqrt(y + 1);
	std::cout << "Значение N: " << round(N * 100) / 100 << "\n";
}
void Tasks::Ts18(double Z, double y)
{
	Z = 3 * pow(y, 2) + sqrt(pow(y, 3) + 1);
	std::cout << "Значение Z: " << round(Z * 100) / 100 << "\n";
}
void Tasks::Ts19(double P, double n, double y, double g )
{
	P = n * sqrt(pow(y, 3) + 1.09 * g);
	std::cout << "Значение P: " << round(P * 100) / 100 << "\n";

}
void Tasks::Ts20(double U, double k, double y, double x )
{
	U = exp(k + y) + tan(x) * sqrt(y);
	std::cout << "Значение U: " << round(U * 100) / 100 << "\n";

}
void Tasks::Ts21(double P, double y, double h)
{
	P = exp(y - 5.5) + 9.1 * pow(h, 3);
	std::cout << "Значение P: " << round(P * 100) / 100 << "\n";

}
void Tasks::Ts22(double T, double n, double y,double x)
{
	T = sin(2 * n) * log(2 * pow(y, 2) + sqrt(x));
	std::cout << "Значение T: " << round(T * 100) / 100 << "\n";

}
void Tasks::Ts23(double G, double y,double f)
{
	G = exp(2 * y) + sin(f);
	std::cout << "Значение G: " << round(G * 100) / 100 << "\n";

}
void Tasks::Ts24(double F, double y)
{
	F = 2 * sin(0.214 * pow(y, 5) + 1);
	std::cout << "Значение F: " << round(F * 100) / 100 << "\n";

}
void Tasks::Ts25(double G, double y, double f)
{
	G = exp(2 * y) + sin(pow(f, 2));
	std::cout << "Значение G: " << round(G * 100) / 100 << "\n";

}
void Tasks::Ts26(double Z, double P)
{
	Z =pow(sin(pow(P, 2) + 0.4), 2);
	std::cout << "Значение Z: " << round(Z * 100) / 100 << "\n";

}
void Tasks::Ts27(double W, double v, double y,double x)
{
	W = 1.03 * v + exp(2 * y) + tan(abs(x));
	std::cout << "Значение W: " << round(W * 100) / 100 << "\n";

}
void Tasks::Ts28(double T, double y, double h)
{
	T = exp(y + h) + sqrt(abs(6.4 * y));
	std::cout << "Значение T: " << round(T * 100) / 100 << "\n";

}
void Tasks::Ts29(double N, double y)
{
	N = 3 * pow(y, 2) + sqrt(abs(y + 1));
	std::cout << "Значение N: " << round(N * 100) / 100 << "\n";

}
void Tasks::Ts30(double W, double y, double r)
{
	W = exp(y + r) + 7.2 * sin(r);
	std::cout << "Значение W: " << round(W * 100) / 100 << "\n";

}
void Tasks::Sys(double y, double a, double b, double z, double x)
{
	if (x < -log(a))
	{
		y = a * pow(sin(x), 2) + b * cos(z * x);
	}
	else if (-log(a) >= x && x <= b)
	{
		y = pow(a, b) - pow(cos(a + z * x), 3);
	}
	else if (x > b)
	{
		y = sqrt(2.5 * pow(a, 3) + pow(b - z * pow(x, 2), 5));
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys2(double y, double a, double b, double x, double c)
{
	if (exp(a + b) > exp(x))
	{
		y = sin(exp(a + b)) + pow(x, 2);
	}
	else if (exp(a + b) == exp(x))
	{
		y = atan(a * b * c) + pow(sqrt(x), 3);
	}
	else if (exp(a + b) < exp(x))
	{
		y = cos(sqrt(abs(x + a * b * c)));
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys3(double y, double a, double b, double x, double z)
{
	if (x < a)
	{
		y = 2.8 * pow(sin(a), 2) * x - b * pow(x, 3) * z;
	}
	else if (a >= x && x <= pow(b, 2))
	{
		y = z * pow(cos(a * x + b), 2) + log(z);
	}
	else if (x > pow(b, 2))
	{
		y =exp(2.5 * a * x) + z * a * b * x;
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys4(double y, double x, double a, double c, double b)
{
	if (abs(1 - pow(x, 2)) == a + c)
	{
		y = x * exp(a) +exp(abs(3 * c));
	}
	else if (abs(1 - pow(x, 2)) > a + c)
	{
		y = pow(sin(a * x), 2) + cos(b) * c;
	}
	else if (abs(1 - pow(x, 2)) < a + c)
	{
		y = sqrt(a * pow(b, 4) + pow(sqrt(c * pow(x, 2)), 5));
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys5(double y, double m, double n, double x, double k)
{
	if (pow(x, 2) > m + n)
	{
		y = log(abs(m * x + n));
	}
	else if (pow(x, 2) == m + n)
	{
		y = exp(cos(abs(m * x - n)));
	}
	else if (pow(x, 2) < m + n)
	{
		y = pow(sqrt(pow(k, 2) + pow(cos(x), 2)), 3);
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys6(double y, double m, double x, double n, double k)
{
	if (pow(x, 2) > m + n)
	{
		y = log(abs(m * x + n));
	}
	else if (pow(x, 2) == m + n)
	{
		y = exp(cos(abs(m * x - n)));
	}
	else if (pow(x, 2) < m + n)
	{
		y = pow(sqrt(pow(k, 2) + pow(cos(x), 2)), 3);
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys7(double y, double a, double x, double b, double z)
{
	if (x < pow(a, 3))
	{
		y = a * pow(sin(x), 2) + b * cos(z * x + a);
	}
	else if (pow(a, 3) >= x && x <= b)
	{
		y = pow(a + b * x, 2) -sin(a + z * x);
	}
	else if (x > b)
	{
		y = sqrt(x -sin(b * x + z));
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys8(double y, double b, double x, double c, double a)
{
	if (log10(a) < x)
	{
		y = pow(sqrt(pow(b, 2) + sqrt(abs(x + c))), 3);
	}
	else if (log10(a) == x)
	{
		y = cos(x - b - c);
	}
	else if (log10(a) > x)
	{
		y = sin(x + a - b);
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys9(double y, double a, double x, double z, double b)
{
	if (x <= a)
	{
		y = exp(a * x) - 3.5 * pow(cos(z + b * x), 2);
	}
	else if (a > x && x <= pow(b, 3.5))
	{
		y = a + log(abs(a + b * x)) - 2 * x;
	}
	else if (x > pow(b, 3.5))
	{
		y = a + pow(cos(a + b * x * z), 3.5);
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}
void Tasks::Sys10(double y, double k, double x, double m, double n)
{
	if (3 * x >abs(m + n))
	{
		y = log(abs(log10(abs(k * x + m * n))));
	}
	else if (3 * x == abs(m + n))
	{
		y = sin(k * m * x) +sqrt(abs(n * x));
	}
	else if (3 * x < abs(m + n))
	{
		y = exp(cos(x)) + exp(m + n);
	}
	std::cout << "Значение y: " << round(y * 100) / 100 << "\n";

}