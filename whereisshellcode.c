#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int c, char **v) {
	char	*p;
	p = getenv("SHELLCODE");
	p += (strlen(v[0])-strlen(v[1])) * 2;
	printf("Address			:	%p\n", p);
	return 0;
}
