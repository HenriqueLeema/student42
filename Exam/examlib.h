#ifndef EXAMLIB_H
# define EXAMLIB_H

# include <unistd.h>
# include "examlib.h"

# define DCML "0123456789"
# define HEXL "0123456789abcdef"
# define HEXU "0123456789ABCDEF"

/**
 * @file template.c
 * @brief template
 * 
 * @param argc Argument count (number of strings)
 * @param argv Argument vector (array of strings)
 * 
 * @return INT » template
 * 
 * @exception template
 * 
 * @warning template
 * 
 * @note template
 * 
 */
int template(int argc, char **argv);

/**
 * @brief Program that takes a string and displays its first word followed by a newline
 *
 * @warning Allowed functions: write
 * 
 * @note 1. If the number of parameters is not 1, or if there are no words simply display a newline
 * @note 2. A word is a section of string delimited by spaces/tabs or by the 
 * start/end of the string
 * 
 */
int first_word(int argc, char **argv);

/**
 * @brief Program that prints numbers from 1 to 100, each separated by a newline

 * @warning Allowed functions: write
 * 
 * @note 1. Multiple of 3: Fizz
 * @note 2. Multiple of 5: Buzz
 * @note 3. Multiple of 3 and 5: FizzBuzz
 * 
 */
int fizzbuzz(int argc, char **argv);

/**
 * @brief Function that displays a string on the standard output
 * 
 * @param str The string to output
 * 
 * @warning Allowed functions: write
 * 
 */
int ft_putstr(char *str);

/**
 * @brief Function that reproduces the behavior of 'strcpy' (man strcpy)
 * 
 * @param s Pointer to the string memory area
 * @param c Character to be searched inside the string 's'

 * @exception Returns null if the character is not found
 * 
 * @warning Allowed functions: None
 * 
 */
char    *ft_strcpy(char *s1, char *s2);

/**
 * @brief Function that returns the length of a string pointed to by 'str' excluding the null byte
 * 
 * @param str The string to be measured
 * 
 * @warning Allowed functions: None
 * 
 */
int ft_strlen(char *str);

/**
 * @brief Swaps the contents of two integers which adresses are passed as parameters
 * 
 * @param a Pointer to the first integer
 * @param b Pointer to the second integer
 * 
 * @warning Allowed functions: None
 * 
 */
 void	ft_swap(int *a, int *b);

/**
 * @brief Program that takes a string and display it repeating each alphabetical character as many times as its alphabetical index, followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. As an example, 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
 * @note 2. Case remains unchanged
 * @note 3. If the number of arguments is not 1, just display a newline
 * 
 */
int repeat_alpha(int argc, char **argv);

/**
 * @brief Program that takes a string, and displays the string in reverse followed by a newline
 * 
 * @exception If the number of parameters is not 1, simply display a newline
 * 
 * @warning Allowed functions: write
 * 
 */
int rev_print(int argc, char **argv);

/**
 * @brief Program that takes a string and displays it, replacing each of its letters by the respective letter 13 spaces ahead in alphabetical order
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. As an example, 'z' becomes 'm' and 'Z' becomes 'M'
 * @note 2. Case remains unaffected
 * @note 3. The output will be followed by a newline
 * @note 4. If the number of arguments is not 1, the program displays a newline
 * 
 */
int rot_13(int argc, char **argv);

/**
 * @brief Program that takes a string and displays it, replacing each of its letters by the next one in alphabetical order

* @warning Allowed functions: write
 * 
 * @note 1. As an example, 'z' becomes 'm' and 'Z' becomes 'M'
 * @note 2. Case remains unaffected
 * @note 3. The output will be followed by a newline
 * @note 4. If the number of arguments is not 1, the program displays a newline
 * 
 */
int rotone(int argc, char **argv);

/**
 * @brief Program that takes 3 arguments, the first argument is a string in which to replace a letter (2nd argument) by
another one (3rd argument)
 * 
 * @param argc Argument count (number of strings)
 * @param argv[1] String in which to replace a letter
 * @param argv[2] Letter to replace
 * @param argv[3] Letter to replace with
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. If the number of arguments is not 3, simply display a newline
 * @note 2. If the second argument is not contained in the first one (argv[1]), the program simply rewrites the string followed by a newline
 * 
 */
int search_and_replace(int argc, char **argv);

/**
 * @brief Program that takes a string and reverses the case of all its letters. Other characters remain unchanged
 * 
 * @warning Allowed functions: Missing
 * 
 * @note 1. You must display the result followed by a '\n'
 * @note 2. If the number of arguments is not 1, the program displays '\n'
 * 
 */
int ulstr(int argc, char **argv);

/**
 * @brief Program that takes a string and displays this string after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. 'a' becomes 'z', 'Z' becomes 'A'
 * @note 2. 'd' becomes 'w', 'M' becomes 'N'
 * @note 3. Case remains unaffected
 * @note 4. If the number of arguments is not 1, the program displays only a newline
 * 
 */
int alpha_mirror(int argc, char **argv);

/**
 * @brief Program that takes a single string in lowerCamelCase format and converts it into a string in snake_case format
 * 
 * @warning Allowed functions: write, malloc, realloc
 * 
 * @note 1. lowerCamelCase » each word begins with a capital letter except for the first one
 * @note 2. snake_case » each word is in lowercase and separated by an underscore
 */
int camel_to_snake(int argc, char **argv);

/**
 * @brief Program that takes three strings:
 * 
 * @param first Representations of base-10 signed integers that fit in an int
 * @param second Arithmetic operator: + - * / %
 * @param third Representations of base-10 signed integers that fit in an int
 * 
 * @warning Allowed functions: atoi, printf, write
 * 
 * @note 1. The program must display the result of the requested arithmetic operation, followed by a newline
 * @note 2. If the number of parameters is not 3, the program just displays a newline
 * @note 3. You can assume the string have no mistakes or extraneous characters
 * @note 4. Negative numbers, in input or output, will have one and only one leading '-'
 * @note 5. The result of the operation fits in an int
 * 
 */
int do_op(int argc, char **argv);

/**
 * @brief Function that converts the string argument 'str' to an integer (type int) and returns it
 * 
 * @param str The string to convert
 * 
 * @warning Allowed functions: none
 * 
 * @note It works much like the standard atoi(const char *str) function, see the man
 * 
 */
int ft_atoi(char *str);

/**
 * @brief Function that reproduces the behavior of strcmp (man strcmp)
 * 
 * @param s1 Pointer to the first string to be compared
 * @param s2 Pointer to the second string to be compared
 * 
 * @warning Allowed functions: none
 * 
 */
int ft_strcmp(char *s1, char *s2);

/**
 * @brief Function that reproduces the behavior of strcspn (man strcspn)
 * 
 * @param s Pointer to the string to be scanned
 * @param reject Pointer to the string containing the characters to match
 * 
 * @warning Allowed functions: none
 * 
 */
size_t	ft_strcspn(const char *s, const char *reject);

/**
 * @brief Function that reproduces the behavior of strdup (man strdup)
 * 
 * @param src Pointer to the string to be copied
 * 
 * @warning Allowed functions: malloc
 * 
 */
char    *ft_strdup(char *src);

/**
 * @brief Function that reproduces the behavior of strpbrk (man strpbrk). 
 * Locates the first occurrence in 's1' of any of the bytes in 's2' 
 * 
 * @param s1 Pointer to the string to be scanned
 * @param s2 Pointer to the string containing the characters to match
 * 
 * @warning Allowed functions: malloc
 * 
 */
char	*ft_strpbrk(const char *s1, const char *s2);

/**
 * @brief Function that reverses (in-place) a string
 * @param str The string to reverse
 * 
 * @warning Allowed functions: none
 * 
 */
char    *ft_strrev(char *str);

/**
 * @brief Function that reproduces the behavior of strspn (man strspn). 
 * Calculates the length (in bytes) of the initial segment of 's' which 
 * consists entirely of bytes from 'accept'
 * 
 * @param s Pointer to the string to be scanned
 * @param accept Pointer to the string containing the characters to match
 * 
 * @warning Allowed functions: none
 * 
 */
size_t	ft_strspn(const char *s, const char *accept);

/**
 * @brief Program that takes two strings and displays, without doubles, the
 * characters that appear in both strings, in the order they appear in the first one
 * 
 * @warning Allowed functions: none
 * 
 * @note 1. The display will be followed by a '\n'
 * @note 2. If the number of arguments is not 2, the program displays '\n'
 * 
 */
int inter(int argc, char **argv);

/**
 * @brief Program that takes two strings and displays, without doubles, the
 * characters that appear in both strings, in the order they appear in the first one
 * 
 * @return 1 if the given number is a power of 2, otherwise it returns 0
 * 
 * @warning Allowed functions: none
 * 
 * @note If the number of arguments is not 2, the program displays '\n'
 * 
 */
int	    is_power_of_2(unsigned int n);

/**
 * @brief Program that takes a string and displays its last word followed by a '\n'
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. A word is a section of string delimited by spaces/tabs or by the start/end of the string
 * @note 2. If the number of parameters is not 1, or there are no words, display a newline
 * 
 */
int last_word(int argc, char **argv);

/**
 * @brief Function that returns the largest number found in an array
 * 
 * @return The largest number found in the array, or 0 if the array is empty
 * 
 * @warning Allowed functions: none
 * 
 * @note The first parameter is an array of int, the second is the number of elements in the array
 * 
 */
int		max(int* tab, unsigned int len);

/**
 * @brief Function that takes a byte, and prints it in binary WITHOUT A NEWLINE AT THE END
 * 
 * @param octet The byte to print
 * 
 * @warning Allowed functions: write
 * 
 * @note Example: if you pass 2 to print_bits, it will print "00000010"
 * 
 */
void	print_bits(unsigned char octet);

/**
 * @brief Function that takes a byte, reverses it, bit by bit (like the
 * example) and returns the result
 * 
 * @param octet The byte to reverse
 * 
 * @warning Allowed functions: none
 * 
 */
unsigned char	reverse_bits(unsigned char octet);

/**
 * @brief Program that takes a single string in snake_case format and converts it into a string in lowerCamelCase format
 * 
 * @warning Allowed functions: malloc, free, realloc, write
 * 
 * @note 1. lowerCamelCase » each word begins with a capital letter except for the first one
 * @note 2. snake_case » each word is in lowercase and separated by an underscore
 */
int snake_to_camel(int argc, char **argv);

/**
 * @brief Function that takes a byte, swaps its halves and returns the result
 * 
 * @param octet The byte to swap
 * 
 * @warning Allowed functions: none
 * 
 */
unsigned char	swap_bits(unsigned char octet);

/**
 * @brief Program that takes two strings and displays, without doubles, the characters that appear in either one of the strings
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. The display will be in the order characters appear in the command line, and will be followed by a '\n'
 * @note 2. If the number of arguments is not 2, the program displays '\n'
 */
int ft_union(int argc, char **argv);

/**
 * @brief Program that takes two strings and checks whether it's possible to write the first string with characters from the second string,
 * while respecting the order in which these characters appear in the second string
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. If it's possible, the program displays the string, followed by a '\n'
 * @note 2. Otherwise it simply displays a '\n'
 * @note 3. If the number of arguments is not 2, the program displays a '\n'
 */
int wdmatch(int argc, char **argv);

#endif
