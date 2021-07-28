// https://stackoverflow.com/questions/17768008/how-to-build-install-glfw-3-and-use-it-in-a-linux-project
#ifndef SCOP_H
# define SCOP_H

# include <GLFW/glfw3.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define OPEN_FILE_ERROR "Can't open file"

/*	parser	*/
void			parser_obj(char *file_name);

/*	utils	*/
void 			error_exit(char *message);

#endif
