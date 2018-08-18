#pragma once

#include <iostream>
#include <string>
#include <mysql.h>
#include<stdlib.h>
#include<stdio.h>

MYSQL* connectMysql();
int insertMysql(MYSQL *myfd, const std::string &name, \
		const std::string &sex, const std::string &hobby);
void selectMysql(MYSQL *myfd);
void closeMysql(MYSQL *myfd);

