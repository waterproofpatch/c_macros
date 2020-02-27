/**
 * @author waterproofpatch
 * @brief driver for the macros
 */
#include <stdio.h>

#include "logger.h" /* LOG_* macros */

int main(int argc, char **argv)
{
    LOG_DEBUG("A debug message\n");
    LOG_ERROR("An error message\n");
    LOG_INFO("An info message\n");
    return 0;
}
