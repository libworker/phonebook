#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], entry *pHead)
{
    /* TODO: implement */

    while (pHead != NULL) {
        if (strcasecmp (lastName, pHead->lastName) == 0)
            return pHead;
        pHead = pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    e->pNext = (entry *) malloc(sizeof(entry));
    e = e->pNext;
    e->pNext = NULL;
    strcpy(e->lastName, lastName);

    return e;
}

entry *linkDetailData(entry *e)
{
    e = e->pNext;
    e->data = (detail *) malloc(sizeof(detail));

    return e;
}
