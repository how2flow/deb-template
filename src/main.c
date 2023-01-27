#include <getopt.h>
#include <stdio.h>
#include <unistd.h>

static int options;
const char* sopts = "h";
static struct option lopts[] = {
    {"help", 0, 0, 'h'},
    {NULL, 0, 0, 0}
};

int main(int argc, char *argv[])
{
	if (argc == 1) {
		printf("source: https://github.com/how2flow/deb-template.git\n");
		return 0;
	}

	while ((options =  getopt_long(argc, argv, sopts, lopts, NULL)) != -1) {
		switch (options) {
			case 'h':
				printf("Usage: debtemp\n");
				printf("This is deb packaging template.\n");
				printf("Check path of source and Clone source file.\n");
				break;
			case '?':
				/* already printed err message. */
				break;
		}
	}

	return 0;
}
