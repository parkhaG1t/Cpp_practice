#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

char *strDup(char *);                               /* 노드에 단어가 입력될 경우 값이 입력될 공간 */

struct tnode *addtree(struct tnode *p, char *w) {   /* 트리에 값 할당 함수 */
    int cond;                                       /* strcmp */
    
    if (!p) {
        p = talloc();                               /* 메모리 할당 */
        p->word = strDup(w);                        /* 문자열 시작 주소 */
        p->count = 1;                               /* 카운트 값 할당 */
        p->left = p->right = NULL;                  /* NULL 값 할당 */

    } else if ((cond = strcmp(w, p->word)) > 0) {   /* 사전순으로 앞에 위치할 경우 */
        p->right = addtree(p->right, w);            /* 오른쪽 트리에 값 할당 */
    } else if (cond < 0) {                          /* 사전순으로 뒤에 위치할 경우 */
        p->left = addtree(p->left, w);              /* 왼쪽 트리에 값 할당 */
    } else {                                        /* 값이 동일할 경우 */
        p->count++;                                 /* 카운트만 증가 */
    }

    return p;
}

void treeprint(struct tnode *p, FILE *ofp) {        /* 트리 출력 함수 */
    if (p) {                                        /* 노드가 입력된 경우 */
        treeprint(p->left, ofp);
        fprintf(ofp, "%4d %s\n", p->count, p->word);
        printf("%4d %s\n", p->count, p->word);      /* 노드 값 출력 */
        treeprint(p->right, ofp);
    }

    return;
}

struct tnode *talloc(void)                          /* 트리 메모리 할당 */
{

    return (struct tnode *) malloc(sizeof(struct tnode)); /* 각 노드에 필요한만큼 메모리 할당 */
}