/* ************************************************************************** */
/* ************************************************************************** */
/* **                                                                      ** */
/* **              ███    ███  █████  ██ ███    ██     ██████              ** */
/* **              ████  ████ ██   ██ ██ ████   ██    ██                   ** */
/* **              ██ ████ ██ ███████ ██ ██ ██  ██    ██                   ** */
/* **              ██  ██  ██ ██   ██ ██ ██  ██ ██    ██                   ** */
/* **              ██      ██ ██   ██ ██ ██   ████ ██  ██████              ** */
/* **                                                                      ** */
/* ************************************************************************** */
/* ************************************************************************** */
#include "ft_printf.h"

int	main(void)
{
	int a;
	char s1[] = "this is a %s with the number %d and %i and also %u in it, with an extra lowerHexa %x and upper hexa %X, and let's not forget ab";
	a = ft_printf(s1);
	printf("%d\n", a);
	a = printf(s1);
	printf("%d\n", a);

	return (0);
}
	// a = printf("\" %u \"\n", 0);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 0);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -1);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -1);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 1);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 1);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 9);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 9);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 10);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 10);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 11);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 11);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 15);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 15);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 16);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 16);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 17);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 17);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 99);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 99);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 100);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 100);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 101);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 101);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -9);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -9);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -10);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -10);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -11);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -11);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -14);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -14);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -15);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -15);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -16);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -16);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -99);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -99);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -100);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -100);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", -101);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", -101);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", INT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", INT_MAX);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", INT_MIN);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", INT_MIN);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", LONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", LONG_MAX);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", LONG_MIN);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", LONG_MIN);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", UINT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", UINT_MAX);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", ULONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", ULONG_MAX);
	// printf("%d\n\n", a);

	// a = printf("\" %u \"\n", 9223372036854775807LL);
	// printf("%d\n", a);
	// a = ft_printf("\" %u \"\n", 9223372036854775807LL);
	// printf("%d\n\n", a);

	// a = printf("\" %u %u %u %u %u %u %u\"\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%d\n", a);
	// a = ft_printf("\" %u %u %u %u %u %u %u\"\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%d\n\n", a);

// 	a = printf("\" %.1d \"\n", 0);
// 	printf("%d\n", a);
// 	ft_printf("\" %.1d \"\n", 0);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.2d \"\n", -1);
// 	printf("%d\n", a);
// 	ft_printf("\" %.2d \"\n", -1);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.2d \"\n", 1);
// 	printf("%d\n", a);
// 	ft_printf("\" %.2d \"\n", 1);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.1d \"\n", 9);
// 	printf("%d\n", a);
// 	ft_printf("\" %.1d \"\n", 9);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.2d \"\n", 10);
// 	printf("%d\n", a);
// 	ft_printf("\" %.2d \"\n", 10);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.3d \"\n", 11);
// 	printf("%d\n", a);
// 	ft_printf("\" %.3d \"\n", 11);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.4d \"\n", 15);
// 	printf("%d\n", a);
// 	ft_printf("\" %.4d \"\n", 15);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.5d \"\n", 16);
// 	printf("%d\n", a);
// 	ft_printf("\" %.5d \"\n", 16);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.6d \"\n", 17);
// 	printf("%d\n", a);
// 	ft_printf("\" %.6d \"\n", 17);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.1d \"\n", 99);
// 	printf("%d\n", a);
// 	ft_printf("\" %.1d \"\n", 99);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.2d \"\n", 100);
// 	printf("%d\n", a);
// 	ft_printf("\" %.2d \"\n", 100);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.3d \"\n", 101);
// 	printf("%d\n", a);
// 	ft_printf("\" %.3d \"\n", 101);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.1d \"\n", -9);
// 	printf("%d\n", a);
// 	ft_printf("\" %.1d \"\n", -9);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.2d \"\n", -10);
// 	printf("%d\n", a);
// 	ft_printf("\" %.2d \"\n", -10);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.3d \"\n", -11);
// 	printf("%d\n", a);
// 	ft_printf("\" %.3d \"\n", -11);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.4d \"\n", -14);
// 	printf("%d\n", a);
// 	ft_printf("\" %.4d \"\n", -14);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.1d \"\n", -15);
// 	printf("%d\n", a);
// 	ft_printf("\" %.1d \"\n", -15);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.2d \"\n", -16);
// 	printf("%d\n", a);
// 	ft_printf("\" %.2d \"\n", -16);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.3d \"\n", -99);
// 	printf("%d\n", a);
// 	ft_printf("\" %.3d \"\n", -99);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.3d \"\n", -100);
// 	printf("%d\n", a);
// 	ft_printf("\" %.3d \"\n", -100);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.4d \"\n", -101);
// 	printf("%d\n", a);
// 	ft_printf("\" %.4d \"\n", -101);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.8d \"\n", INT_MAX);
// 	printf("%d\n", a);
// 	ft_printf("\" %.8d \"\n", INT_MAX);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.9d \"\n", INT_MIN);
// 	printf("%d\n", a);
// 	ft_printf("\" %.9d \"\n", INT_MIN);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.10d \"\n", LONG_MAX);
// 	printf("%d\n", a);
// 	ft_printf("\" %.10d \"\n", LONG_MAX);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.11d \"\n", LONG_MIN);
// 	printf("%d\n", a);
// 	ft_printf("\" %.11d \"\n", LONG_MIN);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.12d \"\n", UINT_MAX);
// 	printf("%d\n", a);
// 	ft_printf("\" %.12d \"\n", UINT_MAX);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.13d \"\n", ULONG_MAX);
// 	printf("%d\n", a);
// 	ft_printf("\" %.13d \"\n", ULONG_MAX);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.14d \"\n", 9223372036854775807LL);
// 	printf("%d\n", a);
// 	ft_printf("\" %.14d \"\n", 9223372036854775807LL);
// 	printf("%d\n\n", a);
// 	a = printf("\" %.8d %.9d %.10d %.11d %.12d %.13d %.14d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	printf("%d\n", a);
// ft_printf("\" %.8d %.9d %.10d %.11d %.12d %.13d %.14d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// printf("%d\n\n", a);


	// a = printf("\" %-1d \"\n", 0);
	// printf("%d\n", a);
	// a = ft_printf("\" %-1d \"\n", 0);
	// printf("%d\n\n", a);
	// a = printf("\" %-2d \"\n", -1);
	// printf("%d\n", a);
	// a = ft_printf("\" %-2d \"\n", -1);
	// printf("%d\n\n", a);
	// a = printf("\" %-3d \"\n", 1);
	// printf("%d\n", a);
	// a = ft_printf("\" %-3d \"\n", 1);
	// printf("%d\n\n", a);
	// a = printf("\" %-4d \"\n", 9);
	// printf("%d\n", a);
	// a = ft_printf("\" %-4d \"\n", 9);
	// printf("%d\n\n", a);
	// a = printf("\" %-1d \"\n", 10);
	// printf("%d\n", a);
	// a = ft_printf("\" %-1d \"\n", 10);
	// printf("%d\n\n", a);
	// a = printf("\" %-2d \"\n", 11);
	// printf("%d\n", a);
	// a = ft_printf("\" %-2d \"\n", 11);
	// printf("%d\n\n", a);
	// a = printf("\" %-3d \"\n", 15);
	// printf("%d\n", a);
	// a = ft_printf("\" %-3d \"\n", 15);
	// printf("%d\n\n", a);
	// a = printf("\" %-4d \"\n", 16);
	// printf("%d\n", a);
	// a = ft_printf("\" %-4d \"\n", 16);
	// printf("%d\n\n", a);
	// a = printf("\" %-5d \"\n", 17);
	// printf("%d\n", a);
	// a = ft_printf("\" %-5d \"\n", 17);
	// printf("%d\n\n", a);
	// a = printf("\" %-1d \"\n", 99);
	// printf("%d\n", a);
	// a = ft_printf("\" %-1d \"\n", 99);
	// printf("%d\n\n", a);
	// a = printf("\" %-2d \"\n", 100);
	// printf("%d\n", a);
	// a = ft_printf("\" %-2d \"\n", 100);
	// printf("%d\n\n", a);
	// a = printf("\" %-3d \"\n", 101);
	// printf("%d\n", a);
	// a = ft_printf("\" %-3d \"\n", 101);
	// printf("%d\n\n", a);
	// a = printf("\" %-1d \"\n", -9);
	// printf("%d\n", a);
	// a = ft_printf("\" %-1d \"\n", -9);
	// printf("%d\n\n", a);
	// a = printf("\" %-2d \"\n", -10);
	// printf("%d\n", a);
	// a = ft_printf("\" %-2d \"\n", -10);
	// printf("%d\n\n", a);
	// a = printf("\" %-3d \"\n", -11);
	// printf("%d\n", a);
	// a = ft_printf("\" %-3d \"\n", -11);
	// printf("%d\n\n", a);
	// a = printf("\" %-4d \"\n", -14);
	// printf("%d\n", a);
	// a = ft_printf("\" %-4d \"\n", -14);
	// printf("%d\n\n", a);
	// a = printf("\" %-5d \"\n", -15);
	// printf("%d\n", a);
	// a = ft_printf("\" %-5d \"\n", -15);
	// printf("%d\n\n", a);
	// a = printf("\" %-6d \"\n", -16);
	// printf("%d\n", a);
	// a = ft_printf("\" %-6d \"\n", -16);
	// printf("%d\n\n", a);
	// a = printf("\" %-1d \"\n", -99);
	// printf("%d\n", a);
	// a = ft_printf("\" %-1d \"\n", -99);
	// printf("%d\n\n", a);
	// a = printf("\" %-2d \"\n", -100);
	// printf("%d\n", a);
	// a = ft_printf("\" %-2d \"\n", -100);
	// printf("%d\n\n", a);
	// a = printf("\" %-3d \"\n", -101);
	// printf("%d\n", a);
	// a = ft_printf("\" %-3d \"\n", -101);
	// printf("%d\n\n", a);
	// a = printf("\" %-9d \"\n", INT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %-9d \"\n", INT_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %-10d \"\n", INT_MIN);
	// printf("%d\n", a);
	// a = ft_printf("\" %-10d \"\n", INT_MIN);
	// printf("%d\n\n", a);
	// a = printf("\" %-11d \"\n", LONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %-11d \"\n", LONG_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %-12d \"\n", LONG_MIN);
	// printf("%d\n", a);
	// a = ft_printf("\" %-12d \"\n", LONG_MIN);
	// printf("%d\n\n", a);
	// a = printf("\" %-13d \"\n", UINT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %-13d \"\n", UINT_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %-14d \"\n", ULONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %-14d \"\n", ULONG_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %-15d \"\n", 9223372036854775807LL);
	// printf("%d\n", a);
	// a = ft_printf("\" %-15d \"\n", 9223372036854775807LL);
	// printf("%d\n\n", a);
	// a = printf("\" %-9d %-10d %-11d %-12d %-13d %-14d %-15d\"\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%d\n", a);
	// a = ft_printf("\" %-9d %-10d %-11d %-12d %-13d %-14d %-15d\"\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%d\n\n", a);

	// a = printf("\" %X \"\n", 0);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 0);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -1);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -1);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 1);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 1);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 9);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 9);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 10);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 10);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 11);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 11);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 15);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 15);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 16);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 16);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 17);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 17);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 99);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 99);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 100);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 100);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 101);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 101);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -9);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -9);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -10);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -10);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -11);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -11);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -14);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -14);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -15);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -15);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -16);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -16);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -99);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -99);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -100);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -100);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -101);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -101);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", INT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", INT_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", INT_MIN);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", INT_MIN);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", LONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", LONG_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", LONG_MIN);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", LONG_MIN);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", UINT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", UINT_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", ULONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", ULONG_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 9223372036854775807LL);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 9223372036854775807LL);
	// printf("%d\n\n", a);
	// a = printf("\" %X %X %X %X %X %X %X\"\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%d\n", a);
	// a = ft_printf("\" %X %X %X %X %X %X %X\"\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", 42);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", 42);
	// printf("%d\n\n", a);
	// a = printf("\" %X \"\n", -42);
	// printf("%d\n", a);
	// a = ft_printf("\" %X \"\n", -42);
	// printf("%d\n\n", a);

	// a = printf("\" %p \"\n", -1);
	// printf("%d\n", a);
	// a = ft_printf("\" %p \"\n", -1);
	// printf("%d\n\n", a);
	// a = printf("\" %p \"\n", 1);
	// printf("%d\n", a);
	// a = ft_printf("\" %p \"\n", 1);
	// printf("%d\n\n", a);
	// a = printf("\" %p \"\n", 15);
	// printf("%d\n", a);
	// a = ft_printf("\" %p \"\n", 15);
	// printf("%d\n\n", a);
	// a = printf("\" %p \"\n", 16);
	// printf("%d\n", a);
	// a = ft_printf("\" %p \"\n", 16);
	// printf("%d\n\n", a);
	// a = printf("\" %p \"\n", 17);
	// printf("%d\n", a);
	// a = ft_printf("\" %p \"\n", 17);
	// printf("%d\n\n", a);
	// a = printf("\" %p %p \"\n", LONG_MIN, LONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %p %p \"\n", LONG_MIN, LONG_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %p %p \"\n", INT_MIN, INT_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %p %p \"\n", INT_MIN, INT_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %p %p \"\n", ULONG_MAX, -ULONG_MAX);
	// printf("%d\n", a);
	// a = ft_printf("\" %p %p \"\n", ULONG_MAX, -ULONG_MAX);
	// printf("%d\n\n", a);
	// a = printf("\" %p %p \"\n", 0, 0);
	// printf("%d\n", a);
	// a = ft_printf("\" %p %p \"\n", 0, 0);
	// printf("%d\n\n", a);

	// a = printf("\"%1s\"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\"%1s\"\n", "");
	// printf("%d\n\n", a);
	
	// a = printf("\"%-1s\"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\"%-1s\"\n", "");
	// printf("%d\n\n", a);
	
	// a = printf("\" %-2s\"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\" %-2s\"\n", "");
	// printf("%d\n\n", a);
	
	// a = printf("\"%-3s \"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\"%-3s \"\n", "");
	// printf("%d\n\n", a);
	
	// a = printf("\" %-0s \"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\" %-0s \"\n", "");
	// printf("%d\n\n", a);
	
	// a = printf("\" %-s \"\n", "-");
	// printf("%d\n", a);
	// a = ft_printf("\" %-s \"\n", "-");
	// printf("%d\n\n", a);
	
	// a = printf("\" %-1s %-2s \"\n", "", "-");
	// printf("%d\n", a);
	// a = ft_printf("\" %-1s %-2s \"\n", "", "-");
	// printf("%d\n\n", a);
	
	// a = printf("\" %-3s %-4s \"\n", " - ", "");
	// printf("%d\n", a);
	// a = ft_printf("\" %-3s %-4s \"\n", " - ", "");
	// printf("%d\n\n", a);
	
	// a = printf("\" <%-2s> <%-3s> <%-4s> <%-5s> \"\n", " - ", "", "4", "");
	// printf("%d\n", a);
	// a = ft_printf("\" <%-2s> <%-3s> <%-4s> <%-5s> \"\n", " - ", "", "4", "");
	// printf("%d\n\n", a);
	
	// a = printf("\" %-3s %-3s %-4s %-5s %-3s \"\n", " - ", "", "4", "", "2 ");
	// printf("%d\n", a);
	// a = ft_printf("\" %-3s %-3s %-4s %-5s %-3s \"\n", " - ", "", "4", "", "2 ");
	// printf("%d\n\n", a);

	// char s2[] = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	// a = printf("\"%s\"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\"%s\"\n", "");
	// printf("%d\n\n", a);
	// a = printf("\" %s\"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\" %s\"\n", "");
	// printf("%d\n\n", a);
	// a = printf("\"%s \"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\"%s \"\n", "");
	// printf("%d\n\n", a);
	// a = printf("\" %s \"\n", "");
	// printf("%d\n", a);
	// a = ft_printf("\" %s \"\n", "");
	// printf("%d\n\n", a);
	// a = printf("\" %s \"\n", "-");
	// printf("%d\n", a);
	// a = ft_printf("\" %s \"\n", "-");
	// printf("%d\n\n", a);
	// a = printf("\" %s %s \"\n", "", "-");
	// printf("%d\n", a);
	// a = ft_printf("\" %s %s \"\n", "", "-");
	// printf("%d\n\n", a);
	// a = printf("\" %s %s \"\n", " - ", "");
	// printf("%d\n", a);
	// a = ft_printf("\" %s %s \"\n", " - ", "");
	// printf("%d\n\n", a);
	// a = printf("\" %s %s %s %s %s\"\n", " - ", "", "4", "", s2);
	// printf("%d\n", a);
	// a = ft_printf("\" %s %s %s %s %s\"\n", " - ", "", "4", "", s2);
	// printf("%d\n\n", a);
	// a = printf("\" %s %s %s %s %s \"\n", " - ", "", "4", "", "2 ");
	// printf("%d\n", a);
	// a = ft_printf("\" %s %s %s %s %s \"\n", " - ", "", "4", "", "2 ");
	// printf("%d\n\n", a);
	// a = printf("\" NULL %s NULL \"\n", NULL);
	// printf("%d\n", a);
	// a = ft_printf("\" NULL %s NULL \"\n", NULL);
	// printf("%d\n\n", a);

	// a = printf("\"%-1c\"\n", '0');
	// printf("%d\n", a);
	// a = ft_printf("\"%-1c\"\n", '0');
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-2c \"\n", '0');
	// printf("%d\n", a);
	// a = ft_printf("\" %-2c \"\n", '0');
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-3c\"\n", '0' - 256);
	// printf("%d\n", a);
	// a = ft_printf("\" %-3c\"\n", '0' - 256);
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\"%-4c \"\n", '0' + 256);
	// printf("%d\n", a);
	// a = ft_printf("\"%-4c \"\n", '0' + 256);
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-1c %-2c %-3c \"\n", '0', 0, '1');
	// printf("%d\n", a);
	// a = ft_printf("\" %-1c %-2c %-3c \"\n", '0', 0, '1');
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-1c %-2c %-3c \"\n", ' ', ' ', ' ');
	// printf("%d\n", a);
	// a = ft_printf("\" %-1c %-2c %-3c \"\n", ' ', ' ', ' ');
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-1c %-2c %-3c \"\n", '1', '2', '3');
	// printf("%d\n", a);
	// a = ft_printf("\" %-1c %-2c %-3c \"\n", '1', '2', '3');
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-1c %-2c %-3c \"\n", '2', '1', 0);
	// printf("%d\n", a);
	// a = ft_printf("\" %-1c %-2c %-3c \"\n", '2', '1', 0);
	// printf("%d\n", a);
	// putchar('\n');
	// a = printf("\" %-1c %-2c %-3c \"\n", 0, '1', '2');
	// printf("%d\n", a);
	// a = ft_printf("\" %-1c %-2c %-3c \"\n", 0, '1', '2');
	// printf("%d\n", a);
	// putchar('\n');