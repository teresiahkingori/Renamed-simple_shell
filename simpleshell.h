#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


void cpy_handler(__attribute__((unused)) int sg_ind);
int str_cmp(char *str1, char *str2);
char *str_append(char *dstn, const char *src);
int str_cmp2(const char *str1, const char *str2);
char *cpy_str(char *dstn, char *src);
ssize_t len_str(char *str);
extern char **environ;
void path(char **shll);
int my_av(const char *str);
void exec_cmd(char **shll);
void echo_func(int insrt);
void env_main(void);
void free_arr(char **arr);
void *_realloc(void *ptr, size_t old_size, size_t new_size);
char *_strdup(char *str);
void inbuilt(char **shll, char *ls);
int main(void);
char **tknizer(char *ls, char *delim);
int prmpt(void);
int wait_in(void);
int prc_id(void);
int my_ppid(void);
int getline1(void);
int stat1(int ac, char **av);
ssize_t len_str1(char *str);

#endif
