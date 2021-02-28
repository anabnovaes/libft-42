/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:27:06 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 10:37:22 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	counter;
	char			*org;
	size_t			len_s;

	counter = 0;
	org = ((char *)s);
	len_s = ft_strlen((char *)s);
	if (!(dest = malloc(len + 1)))
		return (dest);
	if (len == 0)
		return (NULL);
	if (start > len_s)
		return (ft_strdup(""));
	while (counter < (unsigned int)len && s[counter + start])
	{
		dest[counter] = org[counter + start];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int                main_two(void);

static void        check_substr(char *str, int start, int len)
{
    char    *substr;

    printf("str = '%s'(%ld)\n", str, strlen(str));

    if (!(substr = ft_substr(str, start, len)))
        printf("NULL");
    else
        printf("%s", substr);
    if (str == substr)
        printf("\nA new string was not returned");
    else
        free(substr);
}

int                main(int argc, const char *argv[])
{
    char    string[] = "lorem ipsum dolor sit amet";
    int        arg;

    alarm(5);
    if (argc == 1)
        return (0);
    else if ((arg = atoi(argv[1])) == 1)
        check_substr(string, 0, 10);
    else if (arg == 2)
        check_substr(string, 7, 10);
    else if (arg == 3)
        check_substr(string, 7, 0);
    else if (arg == 4)
        check_substr(string, 0, 0);
    else if (arg == 5)
        main_two();
    else if (arg == 6)
    {
        // int iTest = 1;
        // signal(SIGSEGV, sigsegv);
        
        // char * s = ft_substr("tripouille", 0, 42000);
        // check_substr("tripouille", 0, 122);
        check_substr("tripouille", 0, 42000);
        // /* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();
    }
    else if (arg == 7)
    {
        check_substr("tripouille", 100, 1);
    }
    else if (arg == 8)
    {
        check_substr("tripouille", 1, 1);
        // /* 3 */ check(!strcmp(s, "r"));
        // /* 4 */ mcheck(s, 2); free(s); showLeaks();
    }
    return (0);
}


int                main_two(void)
{
    char *str = "01234";
    size_t size = 10;
    char *ret = ft_substr(str, 10, size);

    if (!strncmp(ret, "", 1))
    {
        free(ret);
        printf("TEST_SUCCESS\n");
        return (1);
    }
    free(ret);
    printf("TEST_FAILED\n");
    return (0);
}