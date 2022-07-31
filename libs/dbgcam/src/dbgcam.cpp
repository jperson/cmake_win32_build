#include <iostream>
#include <boost/log/trivial.hpp>

#include <pvcam/master.h>
#include <pvcam/pvcam.h>

rs_bool PV_DECL pl_pvcam_init(void) {
    BOOST_LOG_TRIVIAL(info) << "pl_pvcam_init";
}
