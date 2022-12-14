/* Copyright (c) 2017 - 2022 LiteSpeed Technologies Inc.  See LICENSE. */
#pragma once
#include <Windows.h>
#include <winsock2.h>
typedef SSIZE_T ssize_t;
struct iovec {
  void  *iov_base;    /* Starting address */
  size_t iov_len;     /* Number of bytes to transfer */
};
#define strcasecmp(a,b) _strcmpi(a,b)
#define strncasecmp _strnicmp
#define strdup _strdup
#define PATH_MAX MAX_PATH

#define posix_memalign(p, a, s) (((*(p)) = _aligned_malloc((s), (a))), *(p) ?0 :errno)
