/**
* LibInjection Project
* BSD License -- see `COPYING.txt` for details
*
* https://github.com/libinjection/libinjection/
*
*/

#ifndef LIBINJECTION_ERROR_H
#define LIBINJECTION_ERROR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum injection_result_t {
    RESULT_FALSE = 0,
    RESULT_TRUE = 1,
    RESULT_ERROR = -1
} injection_result_t;

#ifdef __cplusplus
}
#endif

#endif //LIBINJECTION_ERROR_H
