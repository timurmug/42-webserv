/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   socket.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:31:45 by atomatoe          #+#    #+#             */
/*   Updated: 2021/02/03 13:35:32 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOCKET_HPP
# define SOCKET_HPP

#include "includes.hpp"

class Socket
{
    private:
        sockaddr_in     socket_addr;
        socklen_t       address_len;
        char            sin_zero[8];
    public:
        Socket(char *ip, int port)
        {
            address_len = (sizeof(socket_addr));
            socket_addr.sin_family = AF_INET;
            socket_addr.sin_addr.s_addr = inet_addr(ip); // содержит адрес (номер) узла сети.
            socket_addr.sin_port = htons(port); // 80 - port с конфига  что делает htons (80 >> 8 | 80 << 8)
        }
        ~Socket() {};
};

#endif



/*
struct sockaddr_in 
{ 
    __uint8_t         sin_len;  // длина в байтах структуры
    sa_family_t       sin_family;  // флаг передачи между сокетами (интернет/локалка)
    in_port_t         sin_port;  // порт
    struct in_addr    sin_addr;  // структура в которой лежит ip adress
    char              sin_zero[8]; 
};
*/