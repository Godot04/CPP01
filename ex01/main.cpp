/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 10:57:54 by opopov            #+#    #+#             */
/*   Updated: 2025/07/30 13:02:08 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
	int N1 = 3;
	int N2 = 2;
	Zombie *horde1 = zombieHorde(N1, "Steve");
	Zombie *horde2 = zombieHorde(N2, "Bob");
	for (int i = 0; i < N1 && horde1 != NULL; i++)
	{
		std::cout << "[" << i + 1 << "] ";
		horde1[i].announce();
	}
	for (int i = 0; i < N2 && horde2 != NULL; i++)
	{
		std::cout << "[" << i + 1 << "] ";
		horde2[i].announce();
	}
	delete[] horde1;
	delete[] horde2;
	return (0);
}
