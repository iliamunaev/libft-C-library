#include "tests.h"

int	main(void)
{
    printf("\n(^_^) Running tests...");

	// ----- Add tests below ----- //

	printf("\n***Running tests for ft_atoi()***\n");
	test_ft_atoi();

	printf("\n***Running tests for ft_bzero()***\n");
	test_ft_bzero();

	printf("\n***Running tests for ft_calloc()***\n");
	test_ft_calloc();

	printf("\n***Running tests for ft_isalnum()***\n");
	test_ft_isalnum();

	printf("\n***Running tests for ft_isalpha()***\n");
	test_ft_isalpha();

	printf("\n***Running tests for ft_isascii()***\n");
	test_ft_isascii();

	printf("\n***Running tests for ft_isdigit()***\n");
	test_ft_isdigit();

	printf("\n***Running tests for ft_isprint()***\n");
	test_ft_isprint();

	printf("\n***Running tests for ft_memchr()***\n");
	test_ft_memchr();

	printf("\n***Running tests for ft_memcmp()***\n");
	test_ft_memcmp();

	printf("\n***Running tests for ft_memcpy()***\n");
	test_ft_memcpy();

	printf("\n***Running tests for ft_memmove()***\n");
	test_ft_memmove();

	printf("\n***Running tests for ft_memset()***\n");
	test_ft_memset();

	printf("\n***Running tests for ft_strchr()***\n");
	test_ft_strchr();

	printf("\n***Running tests for ft_strlcat()***\n");
	test_ft_strlcat();

	printf("\n***Running tests for ft_strlcpy()***\n");
	test_ft_strlcpy();

	printf("\n***Running tests for ft_strncmp()***\n");
	test_ft_strncmp();

	printf("\n***Running tests for ft_strnstr()***\n");
	test_ft_strnstr();

	printf("\n***Running tests for ft_strrchr()***\n");
	test_ft_strrchr();

	printf("\n***Running tests for ft_strlen()***\n");
	test_ft_strlen();

	printf("\n***Running tests for ft_strdup()***\n");
	test_ft_strdup();

	printf("\n***Running tests for ft_tolower()***\n");
	test_ft_tolower();

	printf("\n***Running tests for ft_toupper()***\n");
	test_ft_toupper();

	printf("\n***Running tests for ft_putchar_fd()***\n");
	test_ft_putchar_fd();

	printf("\n***Running tests for ft_putnbr_fd(()***\n");
	test_ft_putnbr_fd();

	printf("\n***Running tests for ft_putstr_fd(()***\n");
	test_ft_putstr_fd();

	printf("\n***Running tests for ft_putendl_fd(()***\n");
	test_ft_putendl_fd();

	printf("\n***Running tests for ft_itoa()***\n");
	test_ft_itoa();

	printf("\n***Running tests for ft_strjoin()***\n");
	test_ft_strjoin();

	printf("\n***Running tests for ft_striteri()***\n");
	test_ft_striteri();

	printf("\n***Running tests for ft_strmapi()***\n");
	test_ft_strmapi();

	printf("\n***Running tests for ft_strtrim()***\n");
	test_ft_strtrim();

	printf("\n***Running tests for ft_substr()***\n");
	test_ft_substr();

	// -----End of tets ----- //

    printf("\nTests completed (╥﹏╥)...\n");
    return (0);
}
