/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:21 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 15:06:07 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << RED << "[FOR STACK]" << RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << GREEN <<  "[TOP] " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "[SIZE] " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(222);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
	std::cout << "[STACK IS ]" << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
	// not MutantStack<int> mut(mstack) but stack copy constructor called;
    std::stack<int> s(mstack);
	// for (int i = 0; i < 6; i++)
	// {
	// 	std::cout << s.top() << ", ";
	// 	s.pop();
	// }
	// std::cout << "\n";
	std::cout << RED << "[FOR LIST]" << RESET << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << BLUE << "[TOP] " << list.back() << std::endl;
    list.pop_back();
    std::cout << "[SIZE] " << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(222);
    list.push_back(0);
	std::list<int>::iterator list_it = list.begin();
	std::list<int>::iterator list_ite = list.end();
    ++list_it;
    --list_it;
	std::cout << "[LIST IS ]" << std::endl;
    while (list_it != list_ite)
    {
    	std::cout << *list_it << std::endl;
    	++list_it;
    }
    return 0;
}