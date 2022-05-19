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
- 

