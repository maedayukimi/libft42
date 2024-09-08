#include <stdio.h>
static int      len(int n)
{
        if (n <= 9 && n >= -9)
                return (1);
        int     len;

        len = 0;
        while (n)
	{
                len++;
		n /= 10;
	}
        return (len);
}
int	main()
{	
	printf("%d\n", len(100));
	printf("%d\n", len(0));
	printf("%d\n", len(-10));
	printf("%d\n", len(-1000));
	printf("%d\n", len(-12345));
	printf("%d\n", len(-1234567));
}
