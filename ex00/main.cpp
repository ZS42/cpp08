/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:34:53 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/08 14:04:08 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::cout << BLUE << "<VECTOR>" << std::endl;
    // template < class T, class Alloc = allocator<T> > class vector; // generic template

    // explicit initialization for the intVector since C++98 doesn't support list initialization for vectors as in C++11 and later.
    // Hence using push_back for each instead of std::vector<int> intVector = {1, 2, 3, 4, 5, 2, 6, 7, 8};
    // push_back adds a new element at the end of the vector, after its current last element. The content of val is copied (or moved) to the new element.
    // This effectively increases the container size by one, which causes an automatic reallocation of the allocated storage space if -and only if-
    // the new vector size surpasses the current vector capacity.
    std::vector<int> intVector;
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
    intVector.push_back(5);
    intVector.push_back(2);
    intVector.push_back(6);
    intVector.push_back(7);
    intVector.push_back(8);
    // Find the first occurrence of searchValue in intVector
    try
    {
        int find = 2;
        std::vector<int>::iterator result = easyfind(intVector, find);
        // std::distance calculates the number of elements between first and last iterators and returns it
        std::cout << "First occurrence of " << find << " found at index: " << std::distance(intVector.begin(), result) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        int find = 9;
        std::vector<int>::iterator result = easyfind(intVector, find);
        std::cout << "First occurrence of " << find << " found at index: " << std::distance(intVector.begin(), result) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << YELLOW << "<LIST>" << std::endl;
    // template < class T, class Alloc = allocator<T> > class list;
    std::list<int> intList;
    intList.push_back(3);
    intList.push_front(4);
    intList.push_back(15);
    intList.push_front(6);
    intList.push_back(10);
    try
    {
        int find = 10;
        std::list<int>::iterator result = easyfind(intList, find);
        std::cout << "First occurrence of " << find << " found at index: " << std::distance(intList.begin(), result) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        int find = 5;
        std::list<int>::iterator result = easyfind(intList, find);
        std::cout << "First occurrence of " << find << " found at index: " << std::distance(intList.begin(), result) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

// std::cout << GREEN << <DEQUE> << std::endl;
// template < class T, class Alloc = allocator<T> > class deque;
