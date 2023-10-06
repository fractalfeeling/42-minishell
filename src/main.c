/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:31:56 by lwee              #+#    #+#             */
/*   Updated: 2023/08/16 22:31:56 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void sig_handler(int signo)
{
    if (signo == SIGINT)
    {
        write(1, "\n", 1);
        write(1, "minishell> ", 11);
    }
    else if (signo == SIGQUIT)
    {
        // Do nothing
    }
}

int main(void)
{
    char *input;

    // Set up the signal handlers
    if (signal(SIGINT, sig_handler) == SIG_ERR || signal(SIGQUIT, sig_handler) == SIG_ERR)
    {
        perror("signal");
        exit(1);
    }

    while (1)
    {
        input = readline("minishell> ");
        if (!input) // Handle EOF (ctrl-D)
        {
            exit(0);
        }
        add_history(input);
        printf("minishell> %s\n", input);
        free(input);
    }
    return (0);
}