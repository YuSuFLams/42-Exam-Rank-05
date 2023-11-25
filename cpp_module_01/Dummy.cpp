/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:05:53 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 18:27:21 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {}

Dummy::~Dummy(){}

ATarget *Dummy::clone() const {return new Dummy();}