#include "stdio.h"
#include "test.h"
#include "sub.h"
#include "log.h"

void printSub()
{
    log_info("sub-start-log");
    printf("sub-begin\n");
    printTest();
    printf("sub-end\n");
    log_info("sub-end-log");
}