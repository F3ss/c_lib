#include "head.h"

void *ft_memset(void *s, int c, size_t n){
	void *point;

	point = s;
	while (*(char*)s != 0 && n > 0) {
		*(char*)s = c;
		n--;
		s++;
	}
	return point;
}
