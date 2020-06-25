void iinit();
inode_t *ialloc(device_t *dev, short type);
void iupdate(inode_t *ip);
inode_t *idup(inode_t *ip);
void ilock(inode_t *ip);
void iunlock(inode_t *ip);
void iput(inode_t *ip);
void iunlockput(inode_t *ip);
void stati(inode_t *ip, stat_t *st);
int readi(inode_t *ip, char *dst, uint32_t off, uint32_t n);
int writei(inode_t *ip, char *src, uint32_t off, uint32_t n);
