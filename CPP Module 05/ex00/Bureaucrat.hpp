/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:48:24 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 17:48:24 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();

        std::string getName(void) const;
        int getGrade(void) const;

        void upGrade(void);
        void downGrade(void);

        //Exceptions
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception{
		    public:
			    virtual const char *what(void) const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif