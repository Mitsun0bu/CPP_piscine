/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:21:57 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/22 10:44:22 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                            ~~~ INCLUDES ~~~                                */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                            ~~~ CONSTRUCTOR ~~~                             */
/*                                                                            */
/* ************************************************************************** */

Contact::Contact(void)
{
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                          ~~~ MEMBER FUNCTIONS ~~~                          */
/*                                                                            */
/* ************************************************************************** */

int	Contact::set_contact_info(int i)
{
	this->_i = i;
	std::cout << std::endl;
	std::cout << "Enter the first name : ";
	std::cin >> this->_first_name;
	if (std::cin.eof() == TRUE)
		return (FAIL);
	std::cout << "Enter the last name : ";
	std::cin >> this->_last_name;
	if (std::cin.eof() == TRUE)
		return (FAIL);
	std::cout << "Enter the nickname : ";
	std::cin >> this->_nickname;
	if (std::cin.eof() == TRUE)
		return (FAIL);
	std::cout << "Enter the phone number : ";
	std::cin >> this->_phone_number;
	if (std::cin.eof() == TRUE)
		return (FAIL);
	std::cout << "Enter the darkest secret : ";
	std::cin >> this->_secret;
	if (std::cin.eof() == TRUE)
		return (FAIL);
	std::cout << std::endl;
	std::cout << "Contact #" << i << " added successfully !" << std::endl;
	std::cout << std::endl;
	return (SUCCESS);
}

void	Contact::get_contact_info()
{
	std::cout << std::endl;
	std::cout << "Contact index\t: " << this->_i << std::endl;
	std::cout << "First name\t: " << this->_first_name << std::endl;
	std::cout << "Last name\t: " << this->_last_name << std::endl;
	std::cout << "Nickname\t: " << this->_nickname << std::endl;
	std::cout << "Phone number\t: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret\t: " << this->_secret << std::endl;
	std::cout << std::endl;
}

std::string	Contact::get_contact_summary()
{
	std::string			index;
	std::ostringstream	convert;
	std::string			str = "";

	std::cout << std::endl;
	str.append("|");
	convert << this->_i;
	index = convert.str();
	str.append(format_str(index));
	str.append("|");
	str.append(format_str(this->_first_name));
	str.append("|");
	str.append(format_str(this->_last_name));
	str.append("|");
	str.append(format_str(this->_nickname));
	str.append("|");
	return str;
}

std::string	Contact::format_str(std::string str)
{
	std::string	result = "";

	if (str.length() < 10)
	{
		result = str;
		while(result.length() < 10)
			result = result.insert(0, " ");
	}
	else if (str.length() > 10)
	{
		result = str.substr(0, 10);
		result[9] = '.';
	}
	else
		result = str;
	return result;
}

/* ************************************************************************** */
/*                                                                            */
/*                           ~~~ DESTRUCTOR ~~~                               */
/*                                                                            */
/* ************************************************************************** */

Contact::~Contact(void)
{
	return ;
}
