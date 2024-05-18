#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"


int
main(int argc, char *argv[])
{
    for ( int j = 0; j < 10; j++ ) {
        printf("%d\n", j);
    }

  exit(0);
}
