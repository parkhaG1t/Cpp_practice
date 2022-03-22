#ifndef __TREE_H__  /* __TREE_H__ 가 정의되어있지 않을 경우 endif까지 실행 */
#define __TREE_H__

#include <stdio.h>

struct tnode {      /* 노드 구성 정보 */
    char *word;     /* 문자열 */
    int count;      /* 빈도수 */
    struct tnode *left; /* 트리 왼쪽 */
    struct tnode *right; /* 트리 오른쪽 */
};

struct tnode *addtree(struct tnode *, char *);  /* 트리 생성 함수 */
void        treeprint(struct tnode *, FILE *);         /* 출력 함수 */

struct tnode *talloc(void);                     /* 저장공간 할당 */

#endif