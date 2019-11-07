#include "libft.h"
#include "stdio.h"

int main()
{
	printf("avant {%s}\napres {%s}\n","salut",ft_strtrim("salut", "st"));
	printf("avant {%s}\napres {%s}\n","salut",ft_strtrim("salut", "st"));
	printf("avant {%s}\napres {%s}\n","salut",ft_strtrim("salutut", "st"));
	printf("avant {%s}\napres {%s}\n","salut",ft_strtrim("salutut", ""));
	printf("avant {%s}\napres {%s}\n","salut",ft_strtrim("", ""));
	return (0);
}
