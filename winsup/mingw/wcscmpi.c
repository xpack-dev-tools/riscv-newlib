/*
 * wcscmpi.c
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within the package.
 *
 * Oldnames from ANSI header string.h
 *
 * Some wrapper functions for those old name functions whose appropriate
 * equivalents are not simply underscore prefixed.
 *
 */

#include <string.h>

int
wcscmpi (const wchar_t * ws1, const wchar_t * ws2)
{
  return _wcsicmp (ws1, ws2);
}

