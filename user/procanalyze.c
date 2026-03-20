#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Usage: procanalyze <pid>\n");
        exit(1);
    }

    int pid = atoi(argv[1]);
    procanalyze(pid);

    exit(0);
}
