#include "SimplifiedElementSearchActivity.h"

bool SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(bool shiftPressed, bool ctrlPressed, bool altPressed)
{
	return shiftPressed && !ctrlPressed && !altPressed;
}
