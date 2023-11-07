/*
 * http.cpp
 *
 *  Created on: 7 Nov 2023
 *      Author: jondurrant
 */

#include "CppUTest/TestHarness.h"
#include "pico/stdlib.h"
#include "Request.h"

#define BUF_LEN 1024

TEST_GROUP(HTTPGrp){



};

TEST(HTTPGrp, Test1){

		char userBuf[BUF_LEN];
		Request req((char *)userBuf, BUF_LEN);

		char url[] = "http://vmu22a.local.jondurrant.com:5000/time";

		CHECK(req.get(url));

		CHECK_EQUAL(200, 	req.getStatusCode());
}





