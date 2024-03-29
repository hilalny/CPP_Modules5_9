/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:22:13 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/17 00:22:14 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};
    MutantStack &operator=(const MutantStack &copy)
    {
        this->c = copy->c;
        return(*this);
    }
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator    begin(){ return (this->c.begin());}
    iterator    end(){ return(this->c.end());}
};

#endif