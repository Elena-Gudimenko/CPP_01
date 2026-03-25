/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvictor <elvictor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:52:02 by elvictor          #+#    #+#             */
/*   Updated: 2026/03/25 15:52:02 by elvictor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);

public:
    Harl();
    ~Harl();

    void complain(std::string level);
};

#endif