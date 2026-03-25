/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:38:51 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/25 15:38:51 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>
# include <iostream>
# include <fstream>

class Sed {
private:
    std::string _filename;

    std::string _readFile(void) const;
    void        _writeFile(const std::string& content) const;

public:
    Sed(std::string filename);
    ~Sed();

    void replace(std::string s1, std::string s2);
};

#endif