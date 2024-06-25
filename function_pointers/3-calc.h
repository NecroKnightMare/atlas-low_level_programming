#ifndef _CALC_H
#define _CALC_H
/**
 *op - struct
 *
 *description: typedef op_t
**/
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
/**
 *op_mode - prototypes
 *@a: first value
 *@b: second value
 *description: header file with prototypes
**/
int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_add(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
