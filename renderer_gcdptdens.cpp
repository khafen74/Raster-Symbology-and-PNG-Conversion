#include "renderer_gcdptdens.h"

Renderer_GCDPtDens::Renderer_GCDPtDens(const char *rasterPath,
                                       int nTransparency):Renderer_Classified(rasterPath, 11, CR_GreenBlue, nTransparency, false, false)
{
}

void Renderer_GCDPtDens::setClassBreaks()
{
    if (max < 0.5 || max > 2.0)
    {
        setEqualIntervalBreaks();
    }
    else
    {
        classBreaks.resize(12);
        classBreaks[0] = 0.0;
        classBreaks[1] = 0.1;
        classBreaks[2] = 0.2;
        classBreaks[3] = 0.3;
        classBreaks[4] = 0.4;
        classBreaks[5] = 0.5;
        classBreaks[6] = 0.6;
        classBreaks[7] = 0.7;
        classBreaks[8] = 0.8;
        classBreaks[9] = 0.9;
        classBreaks[10] = 1.0;
        classBreaks[11] = 1.1;
        classBreaks[12] = 1.2;
    }
}
