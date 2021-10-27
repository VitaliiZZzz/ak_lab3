#include <iostream>
#include <unistd.h>
#include <getopt.h>

void help();
void version(const char*);
void years(const char*);

int main(int argc, char *argv[]) {
    int rez = -1;
    int option_index;
    const char* short_options = "hv::y:";
    const struct option long_options[] = {
            {"help",no_argument,NULL,'h'},
            {"version",optional_argument,NULL,'v'},
            {"years",required_argument,NULL,'y'},
            {NULL,0,NULL,0}
    };


    while ((rez = getopt_long(argc, argv, short_options, long_options, &option_index))  != -1) {

        switch(rez){
            case 'h': {
                help();
                break;
            }
            case 'v': {
                if (optarg!=NULL)
                    version(optarg);
                else
                    version("1.0");
                break;
            }

            case 'y': {
                years(optarg);
                break;
            }
            case '?': default: {
                printf("Unknown option\n");
                break;
            }
        }
    }
}

void help(){
    printf("Help function\n");
}

void version(const char* ver){
    printf("version: %s\n", ver);
}

void years(const char* number){
    printf("U are %s years old\n", number);
}