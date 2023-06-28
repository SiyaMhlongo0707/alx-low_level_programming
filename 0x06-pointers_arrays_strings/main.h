#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void melangeString(char *point);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char* strcpy(char* copieDeLaChaine, const char* chaineACopier);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
int delimiter(char c);
int lower(char c);
char *leet(char *);
char *rot13(char *);
void print_number(int n);

#endif
