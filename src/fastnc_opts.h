#ifndef __FASTNC_OPTS__
#define __FASTNC_OPTS__

#include "common.h"
#include <getopt.h>

struct FastNCOptions {
    std::string adj_table_filename;
    std::string outfile_filename;
	float threshold_name = 0.8;
	float edge_name = 0;
	int number_name = 1000;
	int jobs_name = 4;
	int step_name = 1;
};


void print_help();


FastNCOptions get_commandline_arguments(int argc, char **argv);


#endif
