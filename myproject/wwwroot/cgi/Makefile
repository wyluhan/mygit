.PHONY:all 
all:math_cgi test_cgi

math_cgi:math_cgi.c
		gcc  -o  $@  $^

test_cgi:test_cgi.c
		gcc  -o  $@  $^

.PHONY:clean
clean:
		rm -f math_cgi test_cgi 
