//
// Created by Liu Yuan on 2023/6/21.
//

#ifndef JSON_TEST_SOURCE_UTILS_H_
#define JSON_TEST_SOURCE_UTILS_H_

static constexpr char *ending_line = "===================================================";
static constexpr char *dividing_line = "---------------------------------------------------";

#define EXAMPLE_PRE_FIX printf("Example %s: \n%s\n", __func__, dividing_line);
#define EXAMPLE_POST_FIX printf("%s\n", ending_line);

#endif //JSON_TEST_SOURCE_UTILS_H_
