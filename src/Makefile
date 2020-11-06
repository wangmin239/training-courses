
CFLAGS = -I ../include -fPIC
SONAME = libprintStudentInfo.so
VERSION = 1
LIBSONAME = $(SONAME).$(VERSION)

all:$(SONAME) install
$(SONAME):$(LIBSONAME)
	ln -sf $^ $@


#compile a shared library
printStudentInfo.o:printStudentInfo.c
	$(CC) -c $(CFLAGS) $< -o $@

$(LIBSONAME):lib%.so.$(VERSION):printStudentInfo.o
	$(CC) -shared $(CFLAGS) $(LDFLAGS) -Wl,-soname,$(SONAME) -o $@ $^

#install the lib
DESTDIR = ../lib
install:
	@mkdir -p $(DESTDIR)
	install $(LIBSONAME) $(DESTDIR)
	ln -sf $(LIBSONAME) $(DESTDIR)/$(SONAME)

# delete the generate files
.PHONY:clean
clean:
	rm  -rf $(LIBSONAME) $(SONAME) printStudentInfo.o $(DESTDIR)
