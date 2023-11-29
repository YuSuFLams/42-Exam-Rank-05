/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:28:53 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:29:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"


Fwoosh::Fwoosh(void): ASpell("Fwoosh", "fwooshed"){}

Fwoosh::~Fwoosh(void){}

ASpell *Fwoosh::clone() const { return (new Fwoosh()); }