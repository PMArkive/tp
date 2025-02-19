#ifndef JKRCOMPARCHIVE_H
#define JKRCOMPARCHIVE_H

#include "JSystem/JKernel/JKRArchive.h"
#include "dolphin/types.h"

class JKRCompArchive : public JKRArchive {
public:
    JKRCompArchive(long, JKRArchive::EMountDirection);
    virtual ~JKRCompArchive();

    void open(long);

    /* vt[09] */ void removeResourceAll(void); /* override */
    /* vt[10] */ bool removeResource(void*);   /* override */

    /* vt[15] */ u32 getExpandedResSize(const void*);                  /* override */
    /* vt[16] */ void* fetchResource(SDIFileEntry*, u32*);             /* override */
    /* vt[17] */ void* fetchResource(void*, u32, SDIFileEntry*, u32*); /* override */

public:
private:
    /* 0x00 */  // vtable
    /* 0x04 */  // JKRArchive
    /* 0x5C */ int field_0x5c;
    /* 0x60 */ int field_0x60;
    /* 0x64 */ int field_0x64;
    /* 0x68 */ int field_0x68;
    /* 0x6C */ int field_0x6c;
    /* 0x70 */ JKRDvdFile* field_0x70;
    /* 0x74 */ u32 mSizeOfMemPart;
    /* 0x78 */ u32 mSizeOfAramPart;
    /* 0x7C */ int field_0x7c;
};

#endif /* JKRCOMPARCHIVE_H */
