struct ringbuffer{

	short size;
	int read;
	int write;
	char *ch;
	struct ringbuffer *next;
};

void initBuffer(struct ringbuffer *buffer,char *myinput,short sizebuffer);


