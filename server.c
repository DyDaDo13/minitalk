/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydado13 <dydado13@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:56:06 by dydado13          #+#    #+#             */
/*   Updated: 2023/12/15 18:26:16 by dydado13         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_handler(int signal, siginfo_t *info, void *context)
{
	static int	bit;
	static int	i;

	(void)info;
	(void)context;
	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	sigact;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("\033[91mError: wrong format.\033[0m\n");
		ft_printf("\033[33mTry: ./server\033[0m\n");
		return (0);
	}
	sigact.sa_sigaction = ft_handler;
	sigact.sa_flags = SA_SIGINFO;
	sigemptyset(&sigact.sa_mask);
	pid = getpid();
	ft_printf("\n\n 	    \033[95mPID\033[0m \033[96m-> \033[0m");
	ft_printf("\033[32m%d\033[0m\n", pid);
	ft_printf("------------------------------------\n");
	ft_printf("       \033[93mWaiting for a message...\033[0m\n\n");
	while (argc == 1)
	{
		sigaction(SIGUSR1, &sigact, NULL);
		sigaction(SIGUSR2, &sigact, NULL);
		pause ();
	}
	return (0);
}

// signal(SIGUSR1, ft_handler);
// signal(SIGUSR2, ft_handler);