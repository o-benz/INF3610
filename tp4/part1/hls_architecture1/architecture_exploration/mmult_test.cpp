#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

typedef float mat_type;

void mmult_sw(mat_type a[DIM][DIM], mat_type b[DIM][DIM], mat_type out[DIM][DIM])
{
	// matrix multiplication of a A*B matrix
	for (int ia = 0; ia < DIM; ++ia)
		for (int ib = 0; ib < DIM; ++ib)
		{

			mat_type sum = 0;

			for (int id = 0; id < DIM; ++id)

				sum += a[ia][id] * b[id][ib];

			out[ia][ib] = sum;
		}
}

int main(void)
{

	int ret_val = 0;

	int i,j, err;

	mat_type matOp1[DIM][DIM];
	mat_type matOp2[DIM][DIM];
	mat_type matMult_sw[DIM][DIM];
	mat_type matMult_hw[DIM][DIM];

	/** Matrix Initiation */
	for(i = 0; i<DIM; i++)
		for(j = 0; j<DIM; j++)
			matOp1[i][j] = (mat_type)(i+j);

	for(i = 0; i<DIM; i++)
		for(j = 0; j<DIM; j++)
			matOp2[i][j] = (mat_type)(i*j);
	/** End of Initiation */

	printf("NORMAL MODE\r\n");

	/* call Matrix Multiplication */
	mmult_hw (matOp1, matOp2, matMult_hw);

	/* reference Matrix Multiplication */
	mmult_sw(matOp1, matOp2, matMult_sw);

	/** Matrix comparison */
	err = 0;
	for (i = 0; (i<DIM && !err); i++)
		for (j = 0; (j<DIM && !err); j++)
			if (matMult_sw[i][j] != matMult_hw[i][j])
				err++;

	if (err == 0)
		printf("Matrixes identical ... Test successful!\r\n");
	else
		printf("Test failed!\r\n");

	return err;

}


