/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:33:23 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/25 13:33:23 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
    private:
    std::string _name;

    public:
    Zombie(std::string name);
    ~Zombie();

    void announce(void);

};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif