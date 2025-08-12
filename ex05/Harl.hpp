/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:28:22 by opopov            #+#    #+#             */
/*   Updated: 2025/08/12 10:42:25 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

class Harl
{
	private:
		void debug (void);
		void info (void);
		void warning (void);
		void error (void);

	public:
		Harl();
		~Harl();
		void complain(std::string level);
};
