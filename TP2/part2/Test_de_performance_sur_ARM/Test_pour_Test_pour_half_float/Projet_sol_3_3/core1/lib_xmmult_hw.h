
#ifndef H_LIB_EXAMPLE_HW_H
#define H_LIB_EXAMPLE_HW_H

#define DIM    54					// Valeur de défault
#define SIZE  ((DIM)*(DIM))

int Setup_HW_Accelerator(__fp16 A[DIM][DIM], __fp16 B[DIM][DIM], __fp16 res_hw[DIM][DIM], int dma_size);

int Run_HW_Accelerator(__fp16 A[DIM][DIM], __fp16 B[DIM][DIM], __fp16 res_hw[DIM][DIM], int dma_size);

int Start_HW_Accelerator(void);

void matrix_multiply_ref(__fp16 a[DIM][DIM], __fp16 b[DIM][DIM], __fp16 out[DIM][DIM]);

#endif
