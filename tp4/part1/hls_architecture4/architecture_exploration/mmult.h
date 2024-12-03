
#include <assert.h>
#include <ap_axi_sdata.h>
#include <stdint.h>

typedef short mat_type;

// DIM pour DSP 216
// DIM no dsp 164

int const DIM = 164;
int const SIZE = DIM*DIM;

// function prototypes
void mmult_hw (mat_type a[DIM][DIM], mat_type b[DIM][DIM], mat_type c[DIM][DIM]);


