#include <stdlib.h>
#include <string.h>

char *strDup(char *s) {
    char *p;

    p = (char *) malloc(strlen(s) + 1);     /* NULL 까지 기록 가능한 공간 할당 */
    if (p) {                                /* 공간이 할당된 경우 */
        strcpy(p, s);                       /* 값 복사 */

    }

    return p;
}