#ifndef EXAMLIB_H
# define EXAMLIB_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include "examlib.h"

# define DCML "0123456789"
# define HEXL "0123456789abcdef"
# define HEXU "0123456789ABCDEF"

typedef struct  s_point
{
  int           x;
  int           y;
}               t_point;

typedef struct  s_list
{
  struct s_list *next;
  void          *data;
}               t_list;

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
int first_word();

/**
 * @brief Program that prints numbers from 1 to 100, each separated by a newline

 * @warning Allowed functions: write
 * 
 * @note 1. Multiple of 3: Fizz
 * @note 2. Multiple of 5: Buzz
 * @note 3. Multiple of 3 and 5: FizzBuzz
 * 
 */
int fizzbuzz();

/**
 * @brief Function that displays a string on the standard output
 * 
 * @param str The string to output
 * 
 * @warning Allowed functions: write
 * 
 */
void  ft_putstr(char *str);

/**
 * @brief Function that reproduces the behavior of 'strcpy' (man strcpy)
 * 
 * @param s Pointer to the string memory area
 * @param c Character to be searched inside the string 's'
 * 
 * @return Pointer to dest

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
 * @note 1. You must display the result followed by a newline
 * @note 2. If the number of arguments is not 1, the program displays newline
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
 * @note 1. The display will be followed by a newline
 * @note 2. If the number of arguments is not 2, the program displays newline
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
 * @note If the number of arguments is not 2, the program displays newline
 * 
 */
int	    is_power_of_2(unsigned int n);

/**
 * @brief Program that takes a string and displays its last word followed by a newline
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
 * @note 1. The display will be in the order characters appear in the command line, and will be followed by a newline
 * @note 2. If the number of arguments is not 2, the program displays newline
 */
int ft_union(int argc, char **argv);

/**
 * @brief Program that takes two strings and checks whether it's possible to write the first string with characters from the second string,
 * while respecting the order in which these characters appear in the second string
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. If it's possible, the program displays the string, followed by a newline
 * @note 2. Otherwise it simply displays a newline
 * @note 3. If the number of arguments is not 2, the program displays a newline
 */
int wdmatch(int argc, char **argv);

/**
 * @brief Program that takes a positive integer as argument and displays the sum of all prime numbers inferior or equal to it followed by a newline
 * 
 * @warning Allowed functions: write, exit
 * 
 * @note 1. If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline
 */
int add_prime_sum(int argc, char **argv);

/**
 * @brief Program that takes a string, and displays this string with exactly one
 * space between words, with no spaces or tabs either at the beginning or the end,
 * followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string
 * @note 2. If the number of arguments is not 1, or if there are no words to display, the program displays a newline
 */
int epur_str(int argc, char **argv);

/**
 * @brief Program that takes a string and displays it with exactly three spaces
 * between each word, with no spaces or tabs either at the beginning or the end,
 * followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string
 * @note 2. If the number of arguments is not 1, or if there are no words to display, the program displays a newline
 */
int expand_str(int argc, char **argv);

/**
 * @brief Function that converts the string argument str (base N <= 16)
 * to an integer (base 10) and returns it
 * 
 * @warning Allowed functions: none
 * 
 * @note 1. The characters recognized in the input are: 0123456789abcdef. Those are, of course, to be trimmed according to the requested base. For example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef"
 * @note 2. Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3"
 * @note 3. Minus signs ('-') are interpreted only if they are the first character of the string
 */
int ft_atoi_base(const char *str, int str_base);

/**
 * @brief Function that returns the number of elements in the linked list that's passed to it
 * 
 * @warning Allowed functions: none
 * 
 * @note Check structure on examlib.h
 */
int ft_list_size(t_list *begin_list);

/**
 * @brief Function that allocates (with malloc()) an array of integers, fill it with consecutive
 * values that begin at start and end at end (Including start and end !), then
 * return a pointer to the first value of the array
 * 
 * @warning Allowed functions: malloc
 * 
 * @note 1. With (1, 3) you will return an array containing 1, 2 and 3
 * @note 2. With (-1, 2) you will return an array containing -1, 0, 1 and 2
 * @note 3. With (0, 0) you will return an array containing 0
 * @note 4. With (0, -3) you will return an array containing 0, -1, -2 and -3
 */
int     *ft_range(int start, int end);

/**
 * @brief Function that allocates (with malloc()) an array of integers, fill it with consecutive
 * values that begin at end and end at start (Including start and end !), then
 * return a pointer to the first value of the array
 * 
 * @warning Allowed functions: malloc
 * 
 * @note 1. With (1, 3) you will return an array containing 3, 2 and 1
 * @note 2. With (-1, 2) you will return an array containing 2, 1, 0 and -1
 * @note 3. With (0, 0) you will return an array containing 0
 * @note 4. With (0, -3) you will return an array containing -3, -2, -1 and 0
 */
int     *ft_rrange(int start, int end);

/**
 * @brief Program named hidenp that takes two strings and displays 1
 * followed by a newline if the first string is hidden in the second one,
 * otherwise displays 0 followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
 * find each character from s1 in s2, in the same order as they appear in s1.
 * Also, the empty string is hidden in any string
 * @note 2. If the number of parameters is not 2, the program displays a newline
 */
int hidenp(int argc, char **argv);

/**
 * @brief Function who takes two unsigned int as parameters and returns the
 * computed LCM of those parameters. LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
 * integer divisible by the both integers
 * 
 * @warning Allowed functions: none
 * 
 * @note - A LCM can be calculated in two ways:
 * @note 1. You can calculate every multiples of each integers until you have a common
 * multiple other than 0
 * @note 2. You can use the HCF (Highest Common Factor) of these two integers and
 * calculate as follows:
 * @note - LCM(x, y) = | x * y | / HCF(x, y)
 * @note - | x * y | means "Absolute value of the product of x by y"
 * @note 3. If at least one integer is null, LCM is equal to 0
 */
unsigned int    lcm(unsigned int a, unsigned int b);

/**
 * @brief Program that displays the number of arguments passed to it, followed by
 * a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note If there are no arguments, just display a 0 followed by a newline
 */
int paramsum(int argc, char **argv);

/**
 * @brief Program that takes two strings representing two strictly positive
 * integers that fit in an int
 * 
 * @warning Allowed functions: printf, atoi, malloc, free
 * 
 * @note 1. Display their highest common denominator followed by a newline (It's always a
 * strictly positive integer)
 * @note 2. If the number of parameters is not 2, display a newline
 */
int pgcd(int argc, char **argv);

/**
 * @brief Program that takes a positive (or zero) number expressed in base 10,
 * and displays it in base 16 (lowercase letters) followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note If the number of parameters is not 1, the program displays a newline
 */
int print_hex(int argc, char **argv);

/**
 * @brief Program that takes one or more strings and, for each argument, puts
 * the last character that is a letter of each word in uppercase and the rest
 * in lowercase, then displays the result followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. A word is a section of string delimited by spaces/tabs or the start/end of the
 * string. If a word has a single letter, it must be capitalized
 * @note 2. A letter is a character in the set [a-zA-Z]
 * @note 3. If there are no parameters, display a newline
 */
int rstr_capitalizer(int argc, char **argv);

/**
 * @brief Program that takes one or several strings and, for each argument,
 * capitalizes the first character of each word (If it's a letter, obviously),
 * puts the rest in lowercase, and displays the result on the standard output,
 * followed by a newline
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. A word is a section of string delimited by spaces/tabs or the start/end of the
 * string. If a word has a single letter, it must be capitalized
 * @note 2. If there are no parameters/arguments, display a newline
 */
int str_capitalizer(int argc, char **argv);

/**
 * @brief Program that displays a number's multiplication table
 * 
 * @warning Allowed functions: write
 * 
 * @note 1. The parameter will always be a strictly positive number that fits in an int,
 * and said number times 9 will also fit in an int
 * @note 2. If there are no parameters/arguments, display a newline
 * @note 3. Example:
 * @note - ./tab_mult 9
 * @note - 1 x 9 = 9
 * @note - 2 x 9 = 18
 * @note - and so on...
 */
int tab_mult(int argc, char **argv);

/**
 * @brief This function must sort the list given as a parameter, using the function
 * pointer cmp to select the order to apply, and returns a pointer to the
 * first element of the sorted list.
 * 
 * @warning Allowed functions: none
 * @warning Expected files   : sort_list.c
 * 
 * @note 1. Duplications must remain
 * @note 2. Inputs will always be consistent
 * @note 3. You must use the type t_list described in the file list.h
 * that is provided to you. You must include that file
 * (#include "list.h"), but you must not turn it in. We will use our own
 * to compile your assignment
 * @note 4. Functions passed as cmp will always return a value different from
 * 0 if a and b are in the right order, 0 otherwise
 */
t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

/**
 * @brief This function must sort (in-place) the 'tab' int array, that contains exactly 'size'
 * members, in ascending order
 * 
 * @warning Allowed functions: none
 * 
 * @note 1. Doubles must be preserved
 * @note 2. Input is always coherent
 */ 
void sort_int_tab(int *tab, unsigned int size);

/**
 * @brief Program that takes a string and displays this string after rotating it
 * one word to the left. Thus, the first word becomes the last, and others stay in the same order
 * 
 * @warning Allowed functions: write, malloc, free
 * 
 * @note 1. A "word" is defined as a part of a string delimited either by spaces/tabs, or
 * by the start/end of the string
 * @note 2. Words will be separated by only one space in the output
 * @note 3. If there's less than one argument, the program displays a newline
 */ 
int rostring(int argc, char **argv);

/**
 * @brief Program that takes a string as a parameter, and prints its words in reverse order
 * 
 * @warning Allowed functions: write, malloc, free
 * 
 * @note 1. A "word" is defined as a part of a string delimited either by spaces/tabs, or
 * by the start/end of the string
 * @note 2. Words will be separated by only one space in the output
 * @note 3. In the parameters that are going to be tested, there won't be any "additional"
 * spaces (meaning that there won't be additionnal spaces at the beginning or at
 * the end of the string, and words will always be separated by exactly one space)
 */
int rev_wstr(int argc, char **argv);

/**
 * @brief Function that takes a string, splits it into words, and returns them as
 * a NULL-terminated array of strings
 * 
 * @warning Allowed functions: malloc
 * 
 * @note 1. A "word" is defined as a part of a string delimited either by spaces/tabs, or
 * by the start/end of the string
 */
char    **ft_split(char *str);

/**
 * @brief Function called ft_list_remove_if that removes from the
 * passed list any element the data of which is "equal" to the reference data
 * 
 * @warning Allowed functions: free
 * @warning Expected files   : ft_list_foreach.c, ft_list.h
 * 
 * @note 1. cmp takes two void* and returns 0 when both parameters are equal
 * @note 2. Check structure on examlib.h
 * @note 3. You have to use the ft_list.h file which will contain such structure
 */
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

/**
 * @brief Function that takes a list and a function pointer, and applies this
 * function to each element of the list
 * 
 * @warning Allowed functions: none
 * @warning Expected files   : ft_list_foreach.c, ft_list.h
 * 
 * @note 1. The function pointed to by f will be used as follows:
 * @note - (*f)(list_ptr->data);
 * @note 2. Check structure on examlib.h
 * @note 3. You have to use the ft_list.h file which will contain such structure
 */
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

/**
 * @brief Function that takes an int and converts it to a null-terminated string.
 * The function returns the result in a char array that you must allocate
 * 
 * @warning Allowed functions: malloc
 * 
 */
char	*ft_itoa(int nbr);

/**
 * @brief Program that takes a positive int and displays its prime factors on the
 * standard output, followed by a newline
 * 
 * @warning Allowed functions: printf, atoi
 * @warning Expected files   : ft_list_foreach.c, ft_list.h
 * 
 * @note 1. Factors must be displayed in ascending order and separated by '*', so that
 * the expression in the output gives the right result
 * @note 2. If the number of parameters is not 1, simply display a newline
 * @note 3. The input, when there is one, will be valid
 */
int fprime(int argc, char **argv);

/**
 * @brief Function that takes a char ** as a 2-dimensional array of char, a
 * t_point as the dimensions of this array and a t_point as the starting point.
 * Starting from the given 'begin' t_point, this function fills an entire zone
 * by replacing characters inside with the character 'F'. A zone is an group of
 * the same character delimitated horizontally and vertically by other characters
 * or the array boundry
 * 
 * @warning Allowed functions: none
 * @warning Expected files   : *.c, *.h
 * 
 * @note 1. The flood_fill function won't fill diagonally
 * @note 2. Check structure on examlib.h
 * @note 3. You have to use the ft_list.h file which will contain such structure
 */
void  flood_fill(char **tab, t_point size, t_point begin);

#endif
