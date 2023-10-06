/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:33:11 by lwee              #+#    #+#             */
/*   Updated: 2023/08/16 22:33:11 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H

// Standard I/O operations
#include <stdio.h>
#include <stdlib.h>

// UNIX standard functions
#include <unistd.h>

// Signal handling
#include <signal.h>

// File and Directory Access
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

// Error handling
#include <errno.h>
#include <string.h>

// Environment variables
#include <stdbool.h>

// Readline and history libraries
#include <readline/readline.h>
#include <readline/history.h>

#define MINISHELL_H

#endif