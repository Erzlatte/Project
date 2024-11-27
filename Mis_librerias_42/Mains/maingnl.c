#include "get_next_line.h"

int	main ()
{
	int		fd;
	char	*line;
	int		lines;

	lines = 1;
	fd = open("hola.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
		printf("%d->%s", lines++, line);
}