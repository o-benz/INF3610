
#include <assert.h>
#include <ap_axi_sdata.h>


typedef float mat_type;

int const DIM = 42;
int const SIZE = DIM*DIM;

// function prototypes
void mmult_hw (mat_type a[DIM][DIM], mat_type b[DIM][DIM], mat_type c[DIM][DIM]);


