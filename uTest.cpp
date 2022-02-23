#include <gtest/gtest.h>
#include <gmock/gmock-more-matchers.h>
#include "header.h"

TEST (uTest, smallTest)
{
    using ::testing::ElementsAre;

    std::vector<int> vec1 {1, 4, 16};
    std::vector<int> vec2 {26, 10, 20};
    EXPECT_THAT(solution(26, vec1, vec2), ElementsAre(10, 4, 0));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}