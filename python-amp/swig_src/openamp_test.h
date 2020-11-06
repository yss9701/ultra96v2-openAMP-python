#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <time.h>
#include <fcntl.h>
#include <string.h>
#include <linux/rpmsg.h>

struct _payload {
	unsigned long num;
	unsigned long size;
	unsigned char data[512];
};

int rpmsg_create_ept(int rpfd, struct rpmsg_endpoint_info *eptinfo);
char *get_rpmsg_ept_dev_name(const char *rpmsg_char_name, const char *ept_name, char *ept_dev_name);
int bind_rpmsg_chrdev(const char *rpmsg_dev_name);
int get_rpmsg_chrdev_fd(const char *rpmsg_dev_name, char *rpmsg_ctrl_name);
int amp_rpmsg_init(void);
int amp_echo_test_a(void);
int amp_send_message(int X_pos, int Y_pos);