/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:25:37 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/25 14:25:37 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
private:
    std::string _name;
    Weapon&     _weapon;
    
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack(void);
};

#endif