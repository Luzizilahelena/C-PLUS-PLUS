/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 08:54:38 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:36:06 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

#define	DEBUG	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"
#define	INFO	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
#define WARNING	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"
#define	ERROR	"This is unacceptable! I want to speak to the manager now.\n"

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
};

#endif
