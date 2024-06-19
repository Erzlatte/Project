/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:18:54 by dllera-d          #+#    #+#             */
/*   Updated: 2024/06/19 10:26:11 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

char	**command(int argc, const char *argv[], int lc)
{
	char	**cadena;

	argc = 0;
	cadena = ft_split(argv[2 + lc], ' ');
	while (cadena[argc])
	{
		printf("%s\n", cadena[argc]);
		argc++;
	}

	if (longcd(cadena) != 0)
		return (NULL);

	return (cadena);
}

void	incmd(int fd[2], char **c1)
{
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	execlp(c1[0], c1[0], c1[1], c1[2]);
}

void	outcmd(int fd[2], char **c1)
{
	int		fd1;

	fd1 = open(FILE_NAME, O_WRONLY);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
	dup2(fd1, STDOUT_FILENO);
	execlp(c1[0], c1[0], c1[1], c1[2]);
}

int	cmd(int argc, const char *argv[], int fd[2])
{
	char	**c1;
	int		pid2;
	int		pid1;

	c1 = command(argc, argv, 0);
	pid1 = fork();
	if (pid1 < 0 || c1 == NULL)
		return (1);
	if (pid1 == 0)
		incmd(fd, c1);
	c1 = command(argc, argv, 1);
	pid2 = fork();
	if (pid2 < 0 || c1 == NULL)
		return (1);
	if (pid2 == 0)
		outcmd(fd, c1);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}

int	pipex(int argc, const char *argv[])
{
	int		fd[2];

	if (pipe(fd) == -1)
		return (1);

	cmd(argc, argv, fd);

	return (0);
}
