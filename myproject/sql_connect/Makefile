CURR_PATH=$(shell pwd)
LIB=$(CURR_PATH)/../lib
INCLUDE=-I$(LIB)/include
MYSQL_LIB=-L$(LIB)/lib -lmysqlclient
cc=g++

.PHONY:all
all:insert_cgi select_cgi

insert_cgi:insert_cgi.cpp comm.cpp
	g++ -o $@ $^ $(INCLUDE) $(MYSQL_LIB)
select_cgi:select_cgi.cpp comm.cpp
	g++ -o $@ $^ $(INCLUDE) $(MYSQL_LIB)

.PHONY:clean
clean:
	rm -f insert_cgi select_cgi


#CURR_PATH=$(shell pwd)
#LIB=$(CURR_PATH)/../lib
#INCLUDE=-I$(LIB)/include
#MYSQL_LIB=-L$(LIB)/lib -lmysqlclient
#
#test:test.c
#	gcc -o $@ $^ $(INCLUDE) $(MYSQL_LIB) 
#
#.PHONY:clean
#clean:
#	rm -f test
