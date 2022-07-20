/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:35:29 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/20 11:55:49 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ CONSTRUCTORS ~~~                             */
/*                                                                            */
/* ************************************************************************** */

Form::Form(void) : _name("Secret File"), _sign_state(false), _sign_grade(1), _exec_grade(1)
{
	std::cout << "A Form has been created by the secretary." << std::endl;
	return ;
}

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_state(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	else
		std::cout << "A Form has been created by the secretary." << std::endl;
	return ;
}

Form::Form(Form const &src) : _sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
	*this = src;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                          ~~~ OPERATOR OVERLOAD ~~~                         */
/*                                                                            */
/* ************************************************************************** */

Form&		Form::operator=(Form const &src)
{
	this->_sign_state = src._sign_state;
	return *this;
}

std::ostream&	operator<<(std::ostream &stream, Form const &Form)
{
	stream << "===== FORM INFOS =====" << std::endl
		   << "Name : " << Form.getName() << std::endl
		   << "Signed : " << Form.getSignState() << std::endl
		   << "Grade required to sign : " << Form.getSignGrade() << std::endl
		   << "Grade required to execute : " << Form.getExecGrade() << std::endl;
	return stream;
}

/* ************************************************************************** */
/*                                                                            */
/*                        ~~~ OTHER MEMBER FUNCTIONS ~~~                      */
/*                                                                            */
/* ************************************************************************** */

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getSignState(void) const
{
	return (this->_sign_state);
}

int					Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int					Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void				Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	else
		this->_sign_state = true;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ DESTRUCTOR ~~~                               */
/*                                                                            */
/* ************************************************************************** */

Form::~Form(void)
{
	std::cout << "A Form has left the office." << std::endl;
	return ;
}
