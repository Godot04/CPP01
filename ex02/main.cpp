/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:03:41 by opopov            #+#    #+#             */
/*   Updated: 2025/07/30 14:46:24 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	// adresses
	std::cout << "str adress: " << &str << std::endl;
	std::cout << "str_ptr adress: " << str_ptr << std::endl;
	std::cout << "std_ref adress: " << &str_ref << std::endl;
	std::cout << std::endl;

	// values
	std::cout << "str value: " << str << std::endl;
	std::cout << "str_ptr value: " << *str_ptr << std::endl;
	std::cout << "str_ref value: " << str_ref << std::endl;
	return (0);
}
