/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:26:41 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/22 10:58:32 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* ************************************************************************** */
/*                                                                            */
/*                               ~~~ INCLUDES ~~~                             */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <time.h>

/* ************************************************************************** */
/*                                                                            */
/*                              ~~~ CLASSES ~~~                               */
/*                                                                            */
/* ************************************************************************** */

class Zombie
{
    public:

        /* constructor          */
                        Zombie(std::string name);
        /* member function      */
        void            announce(void) const;
        /* destructor           */
                        ~Zombie(void);

    private:
        /* private attribute */
        std::string     _name;
};

/* ************************************************************************** */
/*                                                                            */
/*                        ~~~ NON-MEMBER FUNCTIONS ~~~                        */
/*                                                                            */
/* ************************************************************************** */

Zombie      *newZombie(std::string name);
void        randomChump(std::string name);