#include "get_next_line.h"

int	main ()
{
	int		fd;
	char	*line;
	int		lines;

	lines = 1;
	fd = open("mucho.txt", O_RDONLY);

	while ((line = getnext_lines(fd)))
		printf("%d->%s", lines++, line);
}