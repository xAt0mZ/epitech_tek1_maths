/*
** h_102chiffrement.h for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 15:29:41 2012 louis-philippe baron
** Last update Mon Nov 26 19:19:32 2012 louis-philippe baron
*/

#ifndef	H_102CHIFFREMENT_H_
#define H_102CHIFFREMENT_H_

#define	ERR_MESS	(2)
#define	ERROR		(1)
#define	VALID		(0)
#define	USAGE		("\nUsage :\t\t./102chiffrement \"message\" n1 n2 n3 n4 \"base\" flag\n\nWith\n\"message\" :\tshould only contain lowercase letters and spaces\n\"n1 to n4\" :\tare natural numbers for the encryption key\n\"base\" :\tis the base in which you want to encrypt the message (for an encryptation), or in which the message is (for the decryption)\nflag :\t\tis 0 for an encryptation, 1 for a decryption\n\n")
#define	BASE_ERROR_0	("\nBase should not contain same symbols twice\n\n")
#define	BASE_ERROR_1	("\nMessage should only contain spaces and symbols from base\n\n")

int		check_message(char *);
int		check_keycode(char *, char *);
int		check_flag(char *);
  
#endif
