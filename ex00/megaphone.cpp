/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axgimene <axgimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:46:55 by axgimene          #+#    #+#             */
/*   Updated: 2026/01/19 13:21:07 by axgimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j] != '\0'; j++)
		{
			char c = argv[i][j];
			if(c >= 'a' && c <= 'z')
				c -= 32;
			std::cout << c;
		}
		if(i < argc -1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}