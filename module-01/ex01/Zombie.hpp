/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:54:22 by marvin            #+#    #+#             */
/*   Updated: 2022/05/23 13:54:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		void	announce( void );
		Zombie();
		Zombie(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif /* __ZOMBIE_H__ */