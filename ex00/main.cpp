/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:45:43 by opopov            #+#    #+#             */
/*   Updated: 2025/07/07 11:30:29 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *new_zomb;
	new_zomb = newZombie("Carl");
	new_zomb->announce();
	randomChump("Oliver");
	delete new_zomb;
	return (0);
}
