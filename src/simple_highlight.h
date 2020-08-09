#ifndef SIMPLE_HIGHLIGHT_H_
#define SIMPLE_HIGHLIGHT_H_

#include "sqlite3ext.h"

#ifdef __cplusplus
extern "C" {
#endif

void simple_highlight(const Fts5ExtensionApi *pApi, /* API offered by current FTS version */
                      Fts5Context *pFts,            /* First arg to pass to pApi functions */
                      sqlite3_context *pCtx,        /* Context for returning result/error */
                      int nVal,                     /* Number of values in apVal[] array */
                      sqlite3_value **apVal         /* Array of trailing arguments */
);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_HIGHLIGHT_H_
