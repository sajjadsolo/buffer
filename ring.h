#ifndef RINGBUFFER_H
#define RINGBUFFER_H


#define RB_OK                    0
#define RB_ERR_INSUFFICIENT     -100
#define RB_ERR_NOTFOUND         -101

struct ringbuffer{
    size16_t size;
    int reader;
    int writer;
    uint32_t writecounter;
    char *blob;
};

void rb_init(struct ringbuffer *b, char *buff, size16_t size);

#endif
