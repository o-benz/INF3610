#include <stdio.h>
#include <stdlib.h>
#include "hls_half.h"
#include "mmult.h"


// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED
//#define MCR_SIZE 1746		// attention 2500 (50x50) est la valeur de défault

void standalone_mmult (half A[DIM][DIM], half B[DIM][DIM], half C[DIM][DIM])
{

	mmult_hw <half, DIM>(A, B, C);

}



void HLS_accel (AXI_VAL INPUT_STREAM[2*MCR_SIZE], AXI_VAL OUTPUT_STREAM[MCR_SIZE])
{
#pragma HLS INTERFACE s_axilite port=return     bundle=CONTROL_BUS
#pragma HLS INTERFACE axis      port=OUTPUT_STREAM
#pragma HLS INTERFACE axis      port=INPUT_STREAM


	wrapped_mmult_hw <half, DIM, DIM*DIM, 4, 5, 5>(INPUT_STREAM, OUTPUT_STREAM);

	return;
}

