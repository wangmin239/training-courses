#link the objective files to a target
CFLAGS = -I./include -fPIC
LIBS = ./lib
LDFLAGS = -L$(LIBS)
LDLIBS = -lprintStudentInfo
SRC = ./src
TARGET = $(basename $(wildcard *.c))
DEBUG :=
ifneq ($(DEBUG),)
	CFLAGS += -g
	CFLAGS += -DDEBUG
endif


.PHONY: subdirs $(SRC) $(TARGET)
subdirs :$(SRC) $(TARGET)
$(SRC):
	$(MAKE) -C $@

$(TARGET):%$(SUFFIX):%.o 
	$(CC)  $(CFLAGS) $(LDFLAGS) $< -o $@ $(LDLIBS) -Wl,-rpath,./$(LIBS)

#compile the objective files from the source files
%.o:%.c 
	$(CC) -c $(CFLAGS) $< -o $@




# delete the generate files
.PHONY:clean
clean:
	rm $(TARGET).o $(TARGET)
	$(MAKE) -C $(SRC) $@
