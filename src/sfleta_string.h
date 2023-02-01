#ifndef SRC_sfleta_STRING_H_
#define SRC_sfleta_STRING_H_
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

#ifndef sfleta_NULL
#define sfleta_NULL ((void *)0)
#endif

typedef unsigned int sfleta_size_t;

#define allsymbol "cdieEfgGosuxXpn%"

struct Param {
    int flag1, flag2, flag3, flag4, flag, width, accuracy, ERROR, plus, dot, itoa;
    char MOD;
    char length;
};

void *sfleta_memchr(const void *str, int c, sfleta_size_t n);
void *sfleta_memcpy(void *dest, const void *src, sfleta_size_t n);
void *sfleta_memmove(void *dest, const void *src, sfleta_size_t n);
void *sfleta_memset(void *str, int c, sfleta_size_t n);
char *sfleta_strcat(char *dest, const char *src);
char *sfleta_strchr(const char *str, int c);
int sfleta_strcmp(const char *str1, const char *str2);
int sfleta_strncmp(const char *str1, const char *str2, sfleta_size_t n);
char *sfleta_strcpy(char *dest, const char *src);
sfleta_size_t sfleta_strcspn(const char *str1, const char *str2);
char *sfleta_strerror(int errnum);
sfleta_size_t sfleta_strlen(const char *str);
char *sfleta_strpbrk(const char *str1, const char *str2);
char *sfleta_strrchr(const char *str, int c);
sfleta_size_t sfleta_strspn(const char *str1, const char *str2);
char *sfleta_strstr(const char *haystack, const char *needle);
char *sfleta_strtok(char *str, const char *delim);
int sfleta_memcmp(const void *str1, const void *str2, sfleta_size_t n);
char *sfleta_strncat(char *dest, const char *src, sfleta_size_t n);
char *sfleta_strncpy(char *dest, const char *src, sfleta_size_t n);
char *sfleta_strrchr(const char *str, int c);
char *sfleta_strtok(char *s, const char *delim);

void *sfleta_to_upper(const char *str);
void *sfleta_to_lower(const char *str);
void *sfleta_insert(const char *src, const char *str, sfleta_size_t start_index);
void *sfleta_trim(const char *src, const char *trim_chars);

char *sfleta_itoa(int n, char *mass);
char *sfleta_reverse(char *str);
int signum(int VALUE);

int sfleta_sprintf(char *str, const char *format, ...);
void sfleta_parsing(char* symbol, struct Param* pars);
void* sfleta_ReadSpecific(struct Param* spec_f, va_list* argc, char* str);
char* sfleta_WriteFlags(char* BUF, struct Param* mass_f, int* index, sfleta_size_t* LEN);
char* sfleta_sprintf_d(char* BUF, struct Param* mass_f, int* index, sfleta_size_t* LEN);
void sfleta_ClearFlag(struct Param* flag_c);
char* sfleta_ditoa(unsigned long long int n, char *TMP);
void* sfleta_FDot(char* TMP, struct Param* float_t, long double conv_f);
char* sfleta_accuracy_s(char *TMP, int len);
void sfleta_sprintf_s(char* BUF, struct Param* mass_f, int* index, sfleta_size_t* LEN);
void sfleta_sprintfRigth(char* BUF, struct Param* mass_f, int* index, sfleta_size_t* LEN);

#endif  // SRC_sfleta_STRING_H_
