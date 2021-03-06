/*
* Cedarx framework.
* Copyright (c) 2008-2015 Allwinner Technology Co. Ltd.
* Copyright (c) 2014 BZ Chen <bzchen@allwinnertech.com>
*
* This file is part of Cedarx.
*
* Cedarx is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This program is distributed "as is" WITHOUT ANY WARRANTY of any
* kind, whether express or implied; without even the implied warranty
* of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*/
#include <CdxTypes.h>

#include <sys/time.h>
#include <execinfo.h>
#include <CdxLog.h>

//#include <CdxUtils.h>

cdx_int64 CdxGetNowUs(cdx_void)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);

    return (cdx_int64)tv.tv_usec + tv.tv_sec * 1000000ll;
}

void CdxBTDump(void)
{
    /*
    int ret, i;
    void *buffer[128] = {NULL};
    char **bt;
    
    ret = backtrace(buffer, 128);
    bt = backtrace_symbols(buffer, ret);
    CDX_LOGW("-----------------BT START. (%d) (%p)---------------", ret, bt);
    for (i = 0; i < ret; i++)
    {
        CDX_LOGW("<DEBUG>: %s", bt[i]);
    }
    
    CDX_LOGW("-----------------BT END.---------------");
*/
    return ;
}

