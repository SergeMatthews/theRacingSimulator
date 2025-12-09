#pragma once

#ifndef _DLLEXPORT_H_
#define	_DLLEXPORT_H_

#ifdef THERACINGDLL_EXPORTS
	#define THERACINGDLL_API __declspec(dllexport)
#else
	#define THERACINGDLL_API __declspec(dllimport)
#endif

#endif
