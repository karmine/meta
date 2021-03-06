/**
 * @file smooth_hinge.h
 * @author Chase Geigle
 *
 * All files in META are released under the MIT license. For more details,
 * consult the file LICENSE in the root of the project.
 */

#ifndef META_CLASSIFY_SMOOTH_HINGE_LOSS_H_
#define META_CLASSIFY_SMOOTH_HINGE_LOSS_H_

#include "classify/loss/loss_function.h"

namespace meta
{
namespace classify
{
namespace loss
{

/**
 * The smooth hinge loss function for SGD algorithms.
 *
 * Defined as \f$\phi(p, y) = \frac12 \max(0, 1 - py)^2\f$
 * if \f$py \geq 0\f$ and \f$\phi(p, y) = \frac12 - py\f$ otherwise.
 */
struct smooth_hinge : public loss_function
{
    /**
     * The identifier for this loss function.
     */
    const static std::string id;

    double loss(double prediction, int expected) const override;
    double derivative(double prediction, int expected) const override;
};
}
}
}
#endif
