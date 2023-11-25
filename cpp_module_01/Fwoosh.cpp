/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:55:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:04:31 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed"){}

Fwoosh::~Fwoosh(){}

ASpell *Fwoosh::clone() const {return new Fwoosh();}