/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:23:12 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/25 14:23:12 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Addresses: " << std::endl;
    std::cout << "O endereço de memória da variável string: " << &str << std::endl;
    std::cout << "O endereço de memória mantido por stringPTR: " << stringPTR << std::endl;
    std::cout << "O endereço de memória mantido por stringREF: " << &stringREF << std::endl;

    std::cout << "\nValues: " << std::endl;
    std::cout << "O valor da variável str: " << str << std::endl;
    std::cout << "O valor apontado por stringPTR: " << *stringPTR << std::endl;
    std::cout << "O valor apontado por stringREF: " << stringREF << std::endl;
}