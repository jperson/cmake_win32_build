#include<iostream>
#include <boost/log/trivial.hpp>

#include <pvcam/master.h>
#include <pvcam/pvcam.h>

int main(int argc, char* argv[]) {
    BOOST_LOG_TRIVIAL(info) << "Running";
    pl_pvcam_init();
}
