#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>
#include<fcntl.h>
#include"comm.h"



int main()
{
	char arg[1024];
	if( getenv("METHOD") ){
		if(strcasecmp(getenv("METHOD"), "GET") == 0){
			strcpy(arg, getenv("QUERY_STRING"));
		}else{
			char c;
			int i = 0;
			int len = atoi(getenv("CONTENT_LENGTH"));
			for(; i < len; i++ ){
				read(0, &c, 1);
				arg[i] = c;
			}
			arg[i] = 0;
		}
	}

	//arg
	//name=wangwu&sex=man&hobby=coding
//	const std::string name="lisi";
//	const std::string sex="woman";
//	const std::string hobby="sleep";

	strtok(arg, "=&");
	std::string name = strtok(NULL, "=&");
	strtok(NULL, "=&");
	std::string sex = strtok(NULL, "=&");
	strtok(NULL, "=&");
	std::string hobby = strtok(NULL, "=&");

	MYSQL *myfd = connectMysql();
	insertMysql(myfd, name,sex, hobby);
	closeMysql(myfd);
}











