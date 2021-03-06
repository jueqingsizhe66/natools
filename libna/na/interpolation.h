#ifndef _INTERPOLATION_H_
#define _INTERPOLATION_H_

#include "natools.h"
#include "function.h"

int interpolate_newton(vector2_t *x, int n, long double x0, long double *r);
long double finite_difference(function_t *f, int n, long double x0, long double h);
int interpolate_lagrange(vector2_t *x, int n, long double x0, long double *r);

#endif /* _INTERPOLATION_H_ */

/* vim: set sw=2 sts=2 : */
