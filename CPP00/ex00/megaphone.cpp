/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:06:22 by achivela          #+#    #+#             */
/*   Updated: 2025/01/24 12:06:25 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main(int argc, char **argv)
{

    if(argc == 1)
        std::cout << "* Erro";
    else
    {
        int i = 1;
      
        while(argv[i])
        {  
                int  j = 0;
                while(argv[i][j])
                {
                    std::cout << (char) toupper(argv[i][j]);
                    j++;
                }
                if(i < argc - 1)
                    std::cout << ' ';
                i++;
        }
    }
    std::cout << "\n";
    return 0;   
}
