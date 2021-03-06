/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:05:42 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/21 18:47:20 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/main.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ CONSTRUCTORS ~~~                             */
/*                                                                            */
/* ************************************************************************** */

A_Animal::A_Animal(void) : _type("mammal")
{
	std::cout << "An animal is born !" << std::endl;
	return ;
}

A_Animal::A_Animal(A_Animal const &src)
{
	*this = src;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                          ~~~ OPERATOR OVERLOAD ~~~                         */
/*                                                                            */
/* ************************************************************************** */

A_Animal&	A_Animal::operator=(A_Animal const &src)
{
	this->_type = src.getType();
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ DESTRUCTOR ~~~                               */
/*                                                                            */
/* ************************************************************************** */

A_Animal::~A_Animal(void)
{
	std::cout << "R.I.P. dear animal !" << std::endl;
	return ;
}
