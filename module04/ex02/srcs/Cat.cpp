/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:01:02 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/22 10:49:50 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/main.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ CONSTRUCTORS ~~~                             */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat(void) : _brain(new Brain())
{
	std::cout << "The newborn animal is a cat !" << std::endl;
	this->_type = "cat";
	return ;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                          ~~~ OPERATOR OVERLOAD ~~~                         */
/*                                                                            */
/* ************************************************************************** */

Cat&	Cat::operator=(Cat const &src)
{
	this->_type = src.getType();
	*(this->_brain) = *(src._brain);
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                          ~~~ MEMBER FUNCTIONS ~~~                          */
/*                                                                            */
/* ************************************************************************** */

std::string	Cat::getType(void) const
{
	return ("Type : " + this->_type);
}

void	Cat::makeSound() const
{
	std::cout << "Cat : \"Meow.\"" << std::endl;
	return ;
}

void	Cat::printIdea(int i_idea) const
{
	std::cout << this->_brain->getIdea(i_idea) << std::endl;
	return ;
}

void	Cat::setCatIdea(int i_idea, std::string text)
{
	this->_brain->setIdea(i_idea, text);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ DESTRUCTOR ~~~                               */
/*                                                                            */
/* ************************************************************************** */

Cat::~Cat(void)
{
	std::cout << "A cat just died ..." << std::endl;
	delete this->_brain;
	return ;
}
