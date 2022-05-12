#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#define TOK_DELIM " \t\r\n\a"

char* get_input(void);
char **split_input(char *);
int fork_execve(char **);

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
	        char *line;
		        char **tokenize;
			        int stats;

			do 
			{
			           printf("Input: ");
			           line = get_input();
				   tokenize = split_input(line);
				   stats = fork_execve(tokenize);
				   free(line);
				   free(tokenize);
		        }
			while (stats);

			return (0);
}



char *get_input(void)
{
	        char *buffer = NULL;
		size_t buffer_count = 0;

			        if (getline(&buffer, &buffer_count, stdin) == -1)
						        {
								if (feof(stdin))
					                {										                        exit(EXIT_SUCCESS);
																	                }
								else {								                        perror("readline Error:");									 exit(EXIT_FAILURE);											                }
												        }
					        /* Returns an array of chracters entered by user */
					        return (buffer);
}

char **split_input(char *buffer)

{
	        int buffer_count = 64, position = 0;
		        char **tokens_array = malloc(sizeof(char *) * buffer_count);
			        char *token;

				        /* check if allocated memory is NULL */

				        if (!tokens_array)
						        {

				                fprintf(stderr, "lsh: allocation error\n");
					 exit(EXIT_FAILURE);
}
        token = strtok(buffer, TOK_DELIM);

	        while (token != NULL)

	        {

	           /* Store the address of the first token into the array of pointers */
			                tokens_array[position] = token;

					                /* Increase the index of the array of pointers */

					                position++;



							                /* Check if position exceeds allocated space and realloc if true */							                if (position >= buffer_count)
	 {												                        buffer_count += 64;
														     tokens_array = realloc(tokens_array, buffer_count * sizeof(char *));
						if (!tokens_array)															                        {
		 fprintf(stderr, "lsh: allocation error\n");
		 exit(EXIT_FAILURE);
	} 
	}
		token = strtok(NULL, TOK_DELIM);

											        }

        /* Sets the last position in the array to NULL */

        tokens_array[position] = NULL;

	        /* Return the address of the array of pointers */

	        return (tokens_array);
}

int fork_execve(char **args)

{

	        pid_t pid;
	 int status;
			  
	 pid = fork();

				        /* Child process */

				        if (pid == 0)
{
	if (execve(args[0], args, NULL) == -1)
											                {

														                        perror("Error:");

																	                }

										                /* This only runs if execve function fails */									                exit(EXIT_FAILURE);
											        }

					        /* Error forking */

					        else if (pid < 0) {

							perror("Error:");
					        }

						        /* Parent process */

						        else
					        {
					                wait(&status);
					        }

							        return (1);
								}
