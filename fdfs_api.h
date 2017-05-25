#ifndef _FDFS_API_H
#define _FDFS_API_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "fdfs_client.h"
#include "logger.h"


int fdfs_upload_by_filename(const char *filename,char *file_id);



#endif
