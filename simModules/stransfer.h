#ifndef STRANSFER_H
#define STRANSFER_H

#include "selement.h"

class STransfer : public SElement
{
public:
    STransfer();

    virtual SDataVector execute(SDataVector in) = 0;
};

#endif // STRANSFER_H
