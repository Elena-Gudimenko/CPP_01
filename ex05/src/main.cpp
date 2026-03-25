/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:52:14 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/25 15:52:14 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Level DEBUG:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nLevel INFO:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nLevel WARNING:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nLevel ERROR:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nLevel EMPTY:" << std::endl;
    harl.complain("EMPTY");

    return 0;    
}