/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:56:24 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 16:57:02 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main()
{
    Warlock const richard("Richard", "Mistress of Magma");

    richard.introduce();

    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock* jack = new Warlock("Jack", "the Long");

    jack->introduce();
    jack->setTitle("the Mighty");
    jack->introduce();

    delete jack;

    return (0);
}