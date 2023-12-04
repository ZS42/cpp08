/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:34:53 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/03 20:50:37 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

std::cout << BLUE << <VECTOR> << std::endl;
template < class T, class Alloc = allocator<T> > class vector; // generic template

std::cout << RED << <ARRAY> << std::endl;
template < class T, size_t N > class array;

std::cout << GREEN << <DEQUE> << std::endl;
template < class T, class Alloc = allocator<T> > class deque;

std::cout << YELLOW << <LIST> << std::endl;
template < class T, class Alloc = allocator<T> > class list;