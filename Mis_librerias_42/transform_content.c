#include "libft.h"

void	*transform_content(void *content)
{
	if (content == NULL)
	{
		return NULL;
	}
	char *str = (char *)content;
	char *result = strdup(str);
	for (size_t i = 0; result[i]; i++)
	{
		result[i] = ft_toupper(result[i]);
	}
	return result;
}
