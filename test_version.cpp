//
// Created by kuskov on 20.10.2019.
//
#define BOOST_TEST_MODULE ip_filter_test_module

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(ip_filter_test_suite)

    BOOST_AUTO_TEST_CASE(ip_filter_test_version)
    {
        BOOST_CHECK(version() > 0);
    }

BOOST_AUTO_TEST_SUITE_END()
