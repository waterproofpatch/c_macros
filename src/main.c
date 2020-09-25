/**
 * @author waterproofpatch
 * @brief driver for the macros
 */
#include <stdio.h>
#include <assert.h>

#include "logger.h"      /* LOG_* macros */
#include "breakpoint.h"  /* BREAKPOINT_* */
#include "array_utils.h" /* BREAKPOINT_* */

typedef struct SomeStruct
{
    int a;
    int b;
} SomeStruct_t;

/**
 * @brief Test some macro stuff
 *
 * @param argc count of CLI args
 * @param argv ptr to array of CLI args
 * @return int 0 on success
 */
int main(int argc, char **argv)
{
    SomeStruct_t someStructs[7];

    assert(ARRAY_LEN(someStructs) == 7);

    LOG_DEBUG("A debug message\n");
    LOG_ERROR("An error message\n");
    LOG_INFO("An info message\n");

    BREAKPOINT();
    return 0;
}
