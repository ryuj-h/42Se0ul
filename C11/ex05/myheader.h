/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myheader.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:57:18 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 20:04:34 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYHEADER_H
# define MYHEADER_H

# include <unistd.h>
int		plus(int a, int b);
int		minus(int a, int b);
int		multi(int a, int b);
int		div(int a, int b);
int		remain(int a, int b);
int		ft_is_number(char c);
int		ft_is_whitespace(char c);
int		ft_atoi(char *str);
void	ft_put_str(char *str);
void	ft_put_number(int num);
int		ft_isvalide_op(int num2, char c);
int		ft_solve(int num1, int num2, char op);
#endif