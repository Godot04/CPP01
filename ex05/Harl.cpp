/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:28:35 by opopov            #+#    #+#             */
/*   Updated: 2025/08/12 12:14:00 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug (void)
{
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-specialketchup burger. "
	"I really do!" << std::endl;
}

void Harl::info (void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You didn't put enough bacon in my burger! "
	"If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error (void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain (std::string level)
{
	std::string compares[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
		if (compares[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	std::cout << "Made some irritating sound" << std::endl;
}
