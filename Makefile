#link the objective files to a target
CFLAGS = -I./include -fPIC
LIBS = ./lib
LDFLAGS = -L$(LIBS)
LDLIBS = -lprintStudentInfo


studentInfo:studentInfo.o
	$(CC)  $(CFLAGS) $(LDFLAGS) $< -o $@ $(LDLIBS) -Wl,-rpath,./$(LIBS)

#compile the objective files from the source files
studentInfo.o:studentInfo.c 
	$(CC) -c $(CFLAGS) $< -o $@




# delete the generate files
.PHONY:clean
clean:
	rm studentInfo.o studentInfo
