#include "gtest/gtest.h"

#include <string>

TEST(should, pass) {
    ASSERT_EQ(1+1, 2);
}

TEST(should, fail) {
    ASSERT_EQ("Oui", "NON");
}

