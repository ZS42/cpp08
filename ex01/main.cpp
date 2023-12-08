/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:06 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 15:25:42 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.addNumber(11);
    std::cout << GREEN << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << RESET << std::endl;

    std::vector<int> A(10000);
    std::srand( time ( NULL ) );
    // std::generate assigns the value returned by successive calls to gen to the elements in the range [first,last).
    std::generate( A.begin(), A.end(), std::rand );
    Span sp1(A.size());
    sp1.addNumbers(A.begin(), A.end());
    std::cout << BLUE << "sp1 vector contains:";
    for (std::vector<int>::iterator it = A.begin(); it!=A.end(); ++it)
    std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << RED << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << RESET << std::endl;
    return 0;
}

// Should output
// $> ./ex01
// 2
// 14
// $>