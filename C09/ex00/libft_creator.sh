# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 17:09:24 by jryu              #+#    #+#              #
#    Updated: 2022/02/21 17:09:42 by jryu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror *.c
ar -rc libft.a *.o