
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#include"fdfs_api.h"

int main()
{
    int retn = 0;
    const char *filename = "file_test_upload.txt";
    char file_id[128] = {0};

    retn = fdfs_upload_by_filename(filename,file_id);
    if(0 != retn)
    {
        printf("upload_by_filename err,errno = %d\n",retn);
    }

    printf("file_id = %s\n",file_id);

    return 0;
}

