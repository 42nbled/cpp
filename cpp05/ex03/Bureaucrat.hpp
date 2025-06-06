/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:19:28 by nbled             #+#    #+#             */
/*   Updated: 2023/10/26 01:46:27 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat& other);

        void        signForm(AForm& AForm);
        void        upGrade(void);
        void        downGrade(void);
        std::string getName(void)const;
        int         getGrade(void)const;
        void        executeForm(AForm const & form)const;

        class Cant_execute : std::exception
        {
            public:
                const char  *what(void) const throw()
                {
                    return ("Error: Cant execute");
                }
        };

        class GradeTooHighException : std::exception
        {
            public:
                const char  *what(void) const throw()
                {
                    return ("Error: Grade Too High");
                }
        };

        class GradeTooLowException : std::exception
        {
            public:
                const char  *what(void) const throw()
                {
                    return ("Error: Grade Too Low");
                }
        };

    private:
        const std::string   name;
        int                 grade;
};
std::ostream&   operator<<(std::ostream & out, Bureaucrat const &target);

#endif
