#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "tree.h"

#define MAXWORD 100

int getword(char *, int);                       

int main(void) {
    struct tnode *root;                         

    char        word[MAXWORD];                  /* 단어 저장 배열 */
    FILE        *ifp, *ofp;                     /* 파일 포인터 ifp, ofp 선언 */

    root = NULL;
    ifp = fopen("in.txt", "r");                 /* 파일 읽기 */
    ofp = fopen("out.txt", "w");                /* 파일 내보내기, 없으면 권한이 있을 경우 생성 */
    if (!ifp || !ofp) {                          /* 입출력이 다를 경우 */
        fprintf(stderr, "fopen() error.\n");    /* 파일 오류 메시지 */
        exit(1);                                /* 프로그램 종료 */
    }

    while (fscanf(ifp, "%s", word) != EOF) {    /* EOF 일때까지 단어를 추출해서 word에 저장 */
        if (isalpha(word[0])) {                 /* 알파벳일 경우 */
            root = addtree(root, word);         /* 트리에 저장 */
        }
    }
    if (ferror(ifp)) {                          /* 입력중에 오류가 생겼을 경우 */
        fprintf(stderr, "fscanf() error.\n");
    }
    treeprint(root, ofp);
    if (ferror(ofp)) {                          /* 출력중에 오류가 생겼을 경우 */
        fprintf(stderr, "fprintf() error.\n");
        exit(1);                                /* 프로그램 종료 */
    }
    if (fclose(ifp) || fclose(ofp)) {           /* 파일이 닫히지 않았을 경우 */
        fprintf(stderr, "fclose() error.\n");
        exit(1);                                /* 프로그램 종료 */
    }

    exit(0);                                    /* 프로그램 종료 */

}