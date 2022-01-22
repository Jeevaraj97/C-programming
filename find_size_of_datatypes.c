/*
 * find_size_of_datatypes.c
 *
 *  Created on: Jan 22, 2022
 *      Author: JEEVA
 */
# include <stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int int_size;
	float float_size;
	char char_size;
	double double_size;
	long long_size;
	signed int signed_int_size;
	unsigned int unsigned_int_size;

	printf("\nSize of int : %d bytes",sizeof(int_size));
	printf("\nSize of float : %d bytes",sizeof(float_size));
	printf("\nSize of char : %d bytes",sizeof(char_size));
	printf("\nSize of double : %d bytes",sizeof(double_size));
	printf("\nSize of long : %d bytes",sizeof(long_size));
	printf("\nSize of signed int : %d bytes",sizeof(signed_int_size));
	printf("\nSize of unsigned int : %d bytes",sizeof(unsigned_int_size));

	return 0;
}

