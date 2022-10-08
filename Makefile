CC=gcc
CFLAGS=-I.
DEPS = zones.h

UTZ_DATA_DIR = vendor/tzdata
UTZ_REGIONS = africa,asia,australasia,backward,europe,northamerica,pacificnew,southamerica
UTZ_WHITELIST = whitelist.txt

export UTZ_DATA_DIR:=$(UTZ_DATA_DIR)
export UTZ_REGIONS:=$(UTZ_REGIONS)

# UTZ_INCLUDES = majormetros
# export UTZ_INCLUDES:=$(UTZ_INCLUDES)

.PHONY: all clean examples

all: zones.h zones.c

# zones.h: $(UTZ_DATA_DIR) $(UTZ_INCLUDES) $(UTZ_WHITELIST) utils/generate_zones.py utils/utz.py
# 	./utils/generate_zones.py

# whitelist.txt: vendor/android/timezones.xml majormetros utils/compile_whitelist.py 
# 	./utils/compile_whitelist.py

# remove majormetros
zones.h: $(UTZ_DATA_DIR) $(UTZ_WHITELIST) utils/generate_zones.py utils/utz.py
	./utils/generate_zones.py
whitelist.txt: vendor/nobo/timezones.xml utils/compile_whitelist.py 
	./utils/compile_whitelist.py

zones.c: zones.h

# The IANA timezone database is missing zone links for many of the worlds largest metropolitan areas
majormetros:
	./utils/compile_tzlinks.py

%.o: %.c $(DEPS)
	$(CC) -c -g3 -DUTZ_TIGHT -o $@ $< $(CFLAGS)

examples: example/example

example/example: utz.o zones.o examples/example.o
	gcc -o example utz.o zones.o examples/example.o -I.

clean:
	rm -f zones.h zones.c whitelist.txt utz.o zones.o examples/example.o example
