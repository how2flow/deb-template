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
				printf("%s: This is normal call\n", argv[0]);
				break;
			case '?':
				/* already printed err message. */
				break;
		}
	}

	return 0;
}
