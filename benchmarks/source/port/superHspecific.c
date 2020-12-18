#include "e-types.h"
#include "tag.h"
#include "devsim7708.h"
#include "devscc.h"
#include "sh7708.h"
#include "devrtc.h"

void
xusleep(ulong usecs)
{
	ulong	time = devrtc_getusecs();

	while ((devrtc_getusecs() - time) < usecs)
	{
		sleep();	
	}
}