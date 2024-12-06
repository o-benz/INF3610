
#ifndef H_LIB_EXAMPLE_HW_H
#define H_LIB_EXAMPLE_HW_H

#define DIM    200					
#define SIZE  ((DIM)*(DIM))

int Setup_HW_Accelerator(short A[DIM][DIM], short B[DIM][DIM], short res_hw[DIM][DIM], int dma_size);

int Run_HW_Accelerator(short A[DIM][DIM], short B[DIM][DIM], short res_hw[DIM][DIM], int dma_size);

int Start_HW_Accelerator(void);

void matrix_multiply_ref(short a[DIM][DIM], short b[DIM][DIM], short out[DIM][DIM]);

#endif
