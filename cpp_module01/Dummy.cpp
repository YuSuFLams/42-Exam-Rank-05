/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:25:23 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/29 01:26:37 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void): ATarget("Target Practice Dummy"){}

Dummy::~Dummy(void) {}

ATarget *Dummy::clone() const { return (new Dummy()); }
