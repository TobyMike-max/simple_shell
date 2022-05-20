# simple shell

# Table of Content
- Description
- File Structure
- Requirements
- Installation
- Usage
- Ease of Use
- Bugs
- Author
- License

# Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface. Standard functions and system calls employed in simple_shell include: ` access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write. `

# File Structure

# Requirements
simple_shell is designed to run in the Ubuntu 14.04 LTS linux environment and to be compiled using the GNU compiler collection v. gcc 4.8.4 with flags-Wall, -Werror, -Wextra, and -pedantic.

# Installation
- Clone this repository: git clone "https://github.com/alexaorrico/simple_shell.git"
- Change directories into the repository: cd simple_shell
- Compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
- Run the shell in interactive mode: ./hsh
- Or run the shell in non-interactive mode: example echo "pwd" | ./hsh

# Usage
The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):

## Features
- [x] Uses the path
- [x] Implements Builtins
- [x] Handles Command Line Arguments
- [x] custom strtok function
- [x] uses exit status
- [x] shell continues upon Crtl+C (^C)
- [x] Handles Comments (#)
- [x] Handles ;
- [ ] custom getline type function
- [ ] handles && and ||
- [ ] aliases
- [ ] variable replacement

## Builtins


# Example of Use
Run the executable in your terminal after compiling

```
$ ./hsh
$ # This is our rendition of the shell
$ ls -al
total 100
drwxrwxr-x  3 vagrant vagrant  4096 Jul 19 22:49 .
drwxr-xr-x 14 vagrant vagrant  4096 Jul 17 22:37 ..
-rw-rw-r--  1 vagrant vagrant   144 Jul 19 17:16 AUTHORS
-rw-rw-r--  1 vagrant vagrant  2367 Jul 19 22:33 builtins2.c
-rw-rw-r--  1 vagrant vagrant  2764 Jul 19 22:14 builtins.c
-rw-rw-r--  1 vagrant vagrant   710 Jul 16 01:03 environment.c
-rw-rw-r--  1 vagrant vagrant  1217 Jul 16 03:24 errors.c
drwxrwxr-x  8 vagrant vagrant  4096 Jul 19 22:34 .git
-rwxrwxr-x  1 vagrant vagrant 32287 Jul 19 22:34 hsh
-rw-rw-r--  1 vagrant vagrant  1792 Jul 19 22:12 man_1_simple_shell
-rw-rw-r--  1 vagrant vagrant   484 Jul 15 20:09 memory_allocation.c
-rw-rw-r--  1 vagrant vagrant  1273 Jul 18 21:00 new_strtok.c
-rw-rw-r--  1 vagrant vagrant  3427 Jul 19 22:06 path.c
-rw-rw-r--  1 vagrant vagrant  2347 Jul 19 22:49 README.md
-rw-rw-r--  1 vagrant vagrant  1769 Jul 19 22:04 shell.h
-rw-rw-r--  1 vagrant vagrant  1480 Jul 18 21:15 simple_shell.c
-rw-rw-r--  1 vagrant vagrant  2111 Jul 16 01:10 strfunc.c
-rw-rw-r--  1 vagrant vagrant   719 Jul 19 21:46 tokenize.c
```

