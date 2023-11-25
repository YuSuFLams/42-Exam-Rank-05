/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:50:46 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/25 17:51:49 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Warlock.hpp"

int main()
{
    Warlock richard("Richard", "the Titled");

    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();

    richard.learnSpell(fwoosh);

    richard.introduce();
    richard.launchSpell("Fwoosh", bob);

    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);

    return 0;
}