/**********************************************************************************************************************
This file is part of the Control Toolbox (https://adrlab.bitbucket.io/ct), copyright by ETH Zurich, Google Inc.
Authors:  Michael Neunert, Markus Giftthaler, Markus Stäuble, Diego Pardo, Farbod Farshidian
Licensed under Apache2 license (see LICENSE file in main directory)
**********************************************************************************************************************/
#include "DERIVATIVE_NAME.h"

namespace ct {
namespace NS1 {
namespace NS2 {


DERIVATIVE_NAME::JAC_TYPE DERIVATIVE_NAME::jacobian(const Eigen::VectorXd& x_in)
{
    double* jac = jac_.data();

    AUTOGENERATED_CODE_PLACEHOLDER

    return jac_;
}
}
}
}
