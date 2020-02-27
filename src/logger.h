/**
 * @author waterproofpatch
 * @brief logger macros for easier debugging
 */

#ifndef _LOGGER_H_
#define _LOGGER_H_

#define DEBUG(LEVEL, ...)                               \
    do                                                  \
    {                                                   \
        fprintf(stdout, "%s:%d: ", __FILE__, __LINE__); \
        fprintf(stdout, "[" #LEVEL                      \
                        "]"                             \
                        " " __VA_ARGS__);               \
    } while (0)

#define LOG_DEBUG(msg)     \
    do                     \
    {                      \
        DEBUG(DEBUG, msg); \
    } while (0)

#define LOG_ERROR(msg)     \
    do                     \
    {                      \
        DEBUG(ERROR, msg); \
    } while (0)

#define LOG_INFO(msg)     \
    do                    \
    {                     \
        DEBUG(INFO, msg); \
    } while (0)

#endif /* _LOGGER_H_ */
