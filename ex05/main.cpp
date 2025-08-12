/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:28:07 by opopov            #+#    #+#             */
/*   Updated: 2025/08/12 12:12:37 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl karen;
	std::cout << "------------------Debug---------------------" << std::endl;
	karen.complain("DEBUG");
	std::cout << "\n------------------Info----------------------" << std::endl;
	karen.complain("INFO");
	std::cout << "\n------------------Warning-------------------" << std::endl;
	karen.complain("WARNING");
	std::cout << "\n------------------Error---------------------" << std::endl;
	karen.complain("ERROR");
	std::cout << "\n------------------Different-----------------" << std::endl;
	karen.complain("Noise");
}
