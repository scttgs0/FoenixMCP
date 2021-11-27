/**
 * Command Line Interface
 */

#ifndef __CLI_H
#define __CLI_H

/*
 * A function pointer for command implementations:
 *  int cmd_foo(short screen, char * parameters) { ... }
 */
typedef int (*cli_cmd_handler)(short screen, int argc, char * argv[]);

/**
 * About the CLI...
 * The CLI will interpret simple commands from the console in the style of CP/M, DOS, Unix, etc.
 * There are built-in commands, but if a command is issued that is not a built-in, the CLI
 * will look for an executable file with that name somewhere in the search path.
 */

/**
 * Initialize the CLI
 *
 * Returns:
 * 0 on success, negative number on error
 */
extern short cli_init();

extern void cli_rerepl(void);

/**
 * Enter the CLI's read-eval-print loop
 *
 * Inputs:
 * channel = the console channel to use for I/O
 */
extern void cli_repl(short channel);

/*
 * Evaluate an argument to a number
 */
extern long cli_eval_number(const char * arg);

/*
 * Print a help message
 */
extern int cmd_help(short channel, int argc, char * argv[]);

#endif
