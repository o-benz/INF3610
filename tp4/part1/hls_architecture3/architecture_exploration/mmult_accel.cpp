#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

#include "hls_half.h"

// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED

void mmult_hw (mat_type a[DIM][DIM], mat_type b[DIM][DIM], mat_type out[DIM][DIM])
{

	mat_type temp;
	L1:for (int ia = 0; ia < DIM; ++ia)
		L2:for (int ib = 0; ib < DIM; ++ib)
			{
				mat_type sum = 0;
				L3:for (int id = 0; id < DIM; ++id){
						temp = a[ia][id] * b[id][ib];
						sum = sum + temp;
				}
				out[ia][ib] = sum;
			};
			return;
}


