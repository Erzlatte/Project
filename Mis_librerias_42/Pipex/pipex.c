/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:18:54 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/04 17:49:45 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	path = get_path(s_cmd[0], env);
	if (execve(path, s_cmd, env) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(s_cmd[0], 2);
		ft_free_tab(s_cmd);
		exit(0);
	}
}

/*void	incmd(char **av, int *p_fd, char **env)
{
	int		fd;

	fd = open_file(av[1], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	exec(av[2], env);
}

void	outcmd(char **av, int *p_fd, char **env)
{
	int		fd;

	fd = open_file(av[ac - 1], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	exec(av[ac - 2], env);
}

int	main(int ac, char **av, char **env)
{
	int		fd[2];
	pid_t	pid;

	if (ac != 5)
		error_exit(1);
	if (pipe(fd) == -1)
		exit(-1);
	pid = fork();
	if (pid == -1)
		exit(-1);
	if (!pid)
		incmd(av, fd, env);
	outcmd(av, fd, env);
}*/

void	here_doc(char *limiter)
{
	pid_t	pid;
	int		fd[2];
	char	*line;

	if (pipe(fd) == -1)
		exit(0);
	pid = fork();
	if (pid == -1)
		exit(0);
	if (!pid)
	{
		close(fd[0]);
		while (get_next_line(&line))
		{
			if (ft_strcmp(line, limiter) == 0)
				exit(0);
			write(fd[1], line, ft_strlen(line));
		}
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], 0);
	}
}

void	pipes(char *av, char **env)
{
	pid_t	pid;
	int		p_fd[2];

	if (pipe(p_fd) == -1)
		exit(0);
	pid = fork();
	if (pid == -1)
		exit(0);
	if (!pid)
	{
		close(p_fd[0]);
		dup2(p_fd[1], 1);
		exec(av, env);
	}
	else
	{
		close(p_fd[1]);
		dup2(p_fd[0], 0);
	}
}

int	main(int ac, char **av, char **env)
{
	int		fd_in;
	int		fd_out;
	int		i;

	if (ac < 5)
		error_exit(1);

	if (ft_strcmp(av[1], "here_doc") == 0)
	{
		if (ac < 6)
			error_exit(1);
		i = 3;
		fd_out = open_file(av[ac - 1], 0);
		here_doc(av[2]);
	}
	else
	{
		i = 2;
		fd_in = open_file(av[1], 0);
		dup2(fd_in, 0);
	}
	while (i < ac - 2)
		pipes(av[i++], env);
	fd_out = open_file(av[ac - 1], 1);
	dup2(fd_out, 1);
	exec(av[ac - 2], env);
}
