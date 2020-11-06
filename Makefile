#link the objective files to a target
studentInfo:studentInfo.o
	$(CC) $(LDFLAGS) $< -o $@

#compile the objective files from the source files
studentInfo.o:studentInfo.c
	$(CC) -c $(CFLAGS) $< -o $@




# delete the generate files
.PHONY:clean
clean:
	rm studentInfo.o studentInfo
