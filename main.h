#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_ARG 1024

int main(int argsC, char **argv, char **env);
int readInput(char **argv, char **env);
char *minusc(char *str, int length);
int tokenize_input(char *user_input, char *argsC[]);
int exec(char *argsC[], char **argv, char **env);
char *getenv_path(char **env);
int _strcmp(const char *s1, const char *s2);


#endif
