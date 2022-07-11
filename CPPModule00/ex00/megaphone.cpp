/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarci <sdarci@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:56:44 by sdarci            #+#    #+#             */
/*   Updated: 2022/07/04 17:07:53 by sdarci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    *ToUpeer(char *s)
{
    int j = -1;
    char *h;
    h = s;
    while (s[++j])
        h[j] = toupper(s[j]);
    return(h);
}


int main(int argc, char **argv) {
    if (argc < 2)
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    else
	{
		for (int i = 1; i < argc; i++)
			std::cout << ToUpeer(argv[i]);
		std::cout << std::endl;
	}
    return 0;
}
