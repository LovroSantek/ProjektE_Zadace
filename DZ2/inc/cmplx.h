typedef float cmplx_t[2];
void cmplx_div(cmplx_t a, cmplx_t b, cmplx_t c); // c = a / b
void cmplx_mul(cmplx_t a, cmplx_t b, cmplx_t c); // c = a * b
double cmplx_mag(cmplx_t a);  // |a|
double cmplx_phs(cmplx_t a);  // faza od a u radijanima
double cmplx_real(double mag, double phs); // realni dio
double cmplx_imag(double mag, double phs); // imaginarni dio
void cmplx_dft(cmplx_t *input, cmplx_t *output, int N); // dft of a signal
void cmplx_idft(cmplx_t *input, cmplx_t *output, int N); // inverse dft of a signal
