#include <stdio.h>
#include <ctype.h>

/* getword : get next word or character from input */
int getword(char *word, int lim) {
    int c, getch(void);
    void ungetch(int);
    char *w;

    w = word;
    while (isspace(c = getch())) {    /* 공백부분 제거 */
        ;
    }
    if (c != EOF){                      /* 문자 배열에 기록 */
        *w++ = c;

    }
    if (!isalpha(c)){                   /* 알파벳이 아닐 경우 제외 */
        *w = '\0';

        return c;
    }
    for (; --lim > 0; ++w){             /* 문자열을 가져옴 */
        if (!isalnum(*w = getch())) {    /* 문자나 정수가 아닐 경우 제외 */
            ungetch(*w);
            break;
        }
    }
    *w = '\0';                          /* 문자나 정수가 아닌 경우 NULL 문자 삽입 */

    return word[0];
}