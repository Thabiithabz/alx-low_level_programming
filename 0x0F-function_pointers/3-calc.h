#ifndef _HEADER_
#define -HEADER_
/**
 * struct op - Struct op
 *
 * @op: the operator 
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t

int op-odd(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a , int b);
int op_mod(int a, int b);
int (*get_of_func(char *s))(int , int);

#endif
