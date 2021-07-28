#include <unistd.h>
#include "scop.h"

static int
count_words(const char *line)
{
	int count = 1;

	if (line == NULL) {
		return 0;
	}
	for (int i = 0; line[i]; i++) {
		if (line[i] == ' ') {
			count++;
			while (line[i] && line[i] == ' ') {
				i++;
			}
		}
	}
	return count;
}

static char **
split_line(const char *line, int *size)
{
	char **result = NULL;
	int prev = 0;
	int num_words = count_words(line);

	printf("%d: %s", num_words, line);
	return NULL;
}

void
parser_obj(char *file_name)
{
	FILE *fd;
	char *line = NULL;
	size_t len = 0;

	if ((fd = fopen(file_name, "r")) == NULL) {
		error_exit(OPEN_FILE_ERROR);
	}
	for (; getline(&line, &len, fd) != -1;) {
		int size = 0;
		char **words = split_line(line, &size);
	}
	if (line) {
		free(line);
	}
	fclose(fd);
}
