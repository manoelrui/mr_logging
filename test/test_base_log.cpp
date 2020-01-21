#define BOOST_TEST_MODULE test_mr_logging_module

#include "base_log.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(Test_valid_msg) {

    BOOST_CHECK(2 == 2);
}

