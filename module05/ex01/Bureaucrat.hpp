/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:57:29 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/20 12:07:35 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

/* ************************************************************************** */
/*                                                                            */
/*                            ~~~ INCLUDES ~~~                                */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Form.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                             ~~~ CLASSES ~~~                                */
/*                                                                            */
/* ************************************************************************** */

class Form;

class Bureaucrat
{
	public :
		/* constructors 		*/
							Bureaucrat(void);
							Bureaucrat(const std::string name, int grade);
							Bureaucrat(const Bureaucrat& src);
		/* operator overload	*/
		Bureaucrat			&operator=(const Bureaucrat& src);
		/* member functions */
		int					getGrade(void) const;
		const std::string	getName(void) const;
		void				upGrade(void);
		void				downGrade(void);
		void				signForm(Form& form) const;
		/* exceptions 			*/
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat grade is too low");
				}
		};
		/* destructor 			*/
		virtual 			~Bureaucrat(void);

	private :

		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);