#include <stdio.h>
#include <math.h>

typedef float cmplx_t[2];

void cmplx_div(cmplx_t a, cmplx_t b, cmplx_t c)
{
	float nazivnik = (b[0] * b [0]) + (b[1] * b[1]);
	c[0] = ((a[0] * b[0]) + (a[1] * b[1])) / nazivnik;
	c[1] = ((a[1] * b[0]) - (a[0] * b[1])) / nazivnik;
}

void cmplx_mul(cmplx_t a, cmplx_t b, cmplx_t c)
{
	c[0] = (a[0] * b[0]) - (a[1] * b[1]);
	c[1] = (a[1] * b[0]) + (a[0] * b[1]);
}

double cmplx_mag(cmplx_t a)
{
	return sqrt(a[0] * a[0] + a[1] * a[1]);
}

double cmplx_phs(cmplx_t a)
{
	return atan2(a[0], a[1]);
}

double cmplx_real(double mag, double phs)
{
	return mag * cos(phs);
}

double cmplx_imag(double mag, double phs)
{
	return mag * sin(phs);
}

void cmplx_dft(cmplx_t *input, cmplx_t *output, int N)
{
    for (int k = 0; k < N; k++)
    {
        output[k][0] = 0.0;
        output[k][1] = 0.0;
        for (int n = 0; n < N; n++) {
            double kut = -2.0 * M_PI * k * n / N;
            output[k][0] += input[n][0] * cos(kut);
            output[k][1] += input[n][0] * sin(kut);
        }
    }
}

void cmplx_idft(cmplx_t *input, cmplx_t *output, int N)
{
    for (int k = 0; k < N; k++)
    {
        output[k][0] = 0.0;
        output[k][1] = 0.0;
        for (int n = 0; n < N; n++) {
            double kut = 2.0 * M_PI * k * n / N;
            output[k][0] += input[n][0] * cos(kut);
            output[k][1] += input[n][0] * sin(kut);
        }
        output[k][0] /= N;
        output[k][1] /= N;
    }  
}
