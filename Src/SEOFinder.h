// *****************************************************************************
// Header file for the Element Test Add-On
// API Development Kit 24; Mac/Win
//
// Namespaces:        Contact person:
//     -None-
//
// [SG compatible] - Yes
// *****************************************************************************

#if !defined _SEO_FINDER_H
#define _SEO_FINDER_H

#if ACVER == 27
//#include	"ACAPI_MigrationHeader.hpp"
#include	"..\..\CPPCommonLibs\AC27.hpp"
#endif

void	Do_SolidOperation_Create (void);
void	Do_SolidLink_Create (void);
void	Do_SolidLink_Remove (void);
void	Do_SolidLink_Targets (void);
void	Do_SolidLink_Operators (void);
void	GetSEOElements (bool isBoundingBoxConsidered);
#endif
