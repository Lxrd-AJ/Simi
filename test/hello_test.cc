#include "gtest/gtest.h"
#include "simi/ronin.h"
#include <iostream>
#include <fstream>

TEST(HelloTest, GetTime) {
	EXPECT_EQ(simi::hello_greet("Hello Simi"), "Hello Simi");
}

// TEST(HelloTest, ReadFile) {
	
// 	EXPECT_TRUE(false) << message;
// 	EXPECT_EQ(message, ""); //Simi - A yoruba name meaning "Rest in Wealth"
// }
