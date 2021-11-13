#ifndef _BUILTIN_H
#define _BUILTIN_H

#include "../shell.h"
#include "../shellvar.h"

#define BYTE 255
#define BUF_SIZE 4096

/**
 * struct builtin - struct contain func name
 * @funcname: name of func
 * @func: func to be called when name is invoked
 *
 * Description: struct of func name and its respective func
 */

typedef struct builtin
{
	char *funcname;
	void (*func)(dev_t *);
} built_t;

/* builtin_1.c */
void exit_sh(dev_t *sev);
void _printenv(dev_t *sev);
void _setenv(dev_t *sev);
void _unsetenv(dev_t *sev);
int check_builtin(dev_t *sev);

/* builtin_2.c */
void change_dir(dev_t *sev);
void history(dev_t *sev);
void alias(dev_t *sev);

#endif
