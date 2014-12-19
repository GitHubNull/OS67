#ifndef __LIB_H
#define __LIB_H

/* std.c */
extern void *memcpy(void *dest, const void *src, int count);
extern void *memset(void *dest, char val, int count);
extern unsigned short *memsetw(unsigned short *dest, unsigned short val, int count);
extern void printf(char *fmt,...);

/* string.c */
extern int strlen(const char *str);
extern int strcmp(const char *str1, const char *str2);
extern char *strcpy(char *dest,const char *src);
extern char *strcat(char *dest,const char *src);
extern char *strstr(const char *str, const char *search);

/* queue.c */

#endif